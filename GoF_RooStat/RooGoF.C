#include "RooGoF.h"
#include "TError.h"

namespace RooFit {
   RooGoF::RooGoF(RooHist *hist, RooCurve *curve) {
      _curve = curve;
      _dataB = hist;
      _dataU = NULL;
      _pdf = NULL;
      _cdf = NULL;
      _poi = NULL;
      _ndat = hist->GetN();
      _themin = hist->GetX()[0]-hist->GetEXlow()[0];
      _themax = hist->GetX()[_ndat-1]+hist->GetEXhigh()[_ndat-1];
   }

   RooGoF::RooGoF(RooDataSet *data, RooCurve *curve, const char* varname) {
      _curve = curve;
      _dataB = NULL;
      _pdf = NULL;
      _cdf = NULL;
      _poi = NULL;
      _themin = -1e99;
      _themax = 1e99;

      // build the dataset
      _ndat = data->numEntries();
      _dataU = new double[_ndat];
      for (int i=0; i<_ndat; i++) {
         _dataU[i] = ((RooRealVar*) data->get(i)->find(varname))->getVal();
         // if (_dataU[i]<_themin) _themin = _dataU[i];
         // if (_dataU[i]>_themax) _themax = _dataU[i];
      }
   }

   RooGoF::RooGoF(RooDataSet *data, RooAbsPdf *pdf, RooRealVar *poi) {
      _curve = NULL;
      _dataB = NULL;
      _pdf = pdf;
      _poi = poi;
      _themin = -1e99;
      _themax = 1e99;

      // build the dataset
      _ndat = data->numEntries();
      _dataU = new double[_ndat];
      for (int i=0; i<_ndat; i++) {
         _dataU[i] = ((RooRealVar*) data->get(i)->find(*poi))->getVal();
         // if (_dataU[i]<_themin) _themin = _dataU[i];
         // if (_dataU[i]>_themax) _themax = _dataU[i];
      }

      // create the cdf
      _cdf = _pdf->createCdf(*_poi);
   }

   RooGoF::~RooGoF() {
      if (_dataU) delete _dataU;
      if (_cdf) delete _cdf;
   }

   double RooGoF::curve(double x) {
      if (!_curve) return 0;
      return _curve->Eval(x);
   }

   double RooGoF::curve_cdf(double x) {
      if (!_cdf || !_poi) return 0;
      _poi->setVal(x);
      return _cdf->getVal();
   }

   void RooGoF::setRange(double xmin, double xmax) {
      _themin = xmin;
      _themax = xmax;
   }

   void RooGoF::unbinnedTest(double &pvalue, double &testStat, TSmode mode) {
      pvalue=0;
      testStat=1e99;
      if (!_dataU) return;
      if (!(mode==AD || mode==KS)) return;

      // here there are many errors like:
      // Error in <GSLError>: Error 18 in qags.c at 548 : cannot reach tolerance because of roundoff error
      // ... suppress them
      int olderrors = gErrorIgnoreLevel;
      gErrorIgnoreLevel = kBreak;

      ROOT::Math::Functor1D *f = NULL;
      ROOT::Math::GoFTest* goftest = NULL;
      if (_curve) {
         f = new ROOT::Math::Functor1D(this, &RooGoF::curve);
         goftest = new ROOT::Math::GoFTest(_ndat, _dataU, *f,  ROOT::Math::GoFTest::kPDF, _themin, _themax);  // need to specify am interval
      } else if (_cdf) {
         f = new ROOT::Math::Functor1D(this, &RooGoF::curve_cdf);
         goftest = new ROOT::Math::GoFTest(_ndat, _dataU, *f,  ROOT::Math::GoFTest::kCDF, _themin, _themax);  // need to specify am interval
      } else return;

      if (mode==AD) goftest->AndersonDarlingTest(pvalue, testStat);
      else if (mode==KS) goftest->KolmogorovSmirnovTest(pvalue, testStat);

      gErrorIgnoreLevel = olderrors;

      delete goftest;
      delete f;
   }

   void RooGoF::binnedTest(double &pvalue, double &testStat, TSmode mode) {
      pvalue=0;
      testStat=1e99;
      if (!_dataB) return;
      if (mode==AD || mode==KS) return;

      testStat=0;
      ROOT::Math::Functor1D wf(this, &RooGoF::curve);
      ROOT::Math::Integrator ig(ROOT::Math::IntegrationOneDim::kADAPTIVESINGULAR); 
      ig.SetFunction(wf);
      ig.SetRelTolerance(0.01);
      for (int i=0; i<_ndat; i++) {
         double dd = _dataB->GetY()[i];
         if (dd<0 || (dd==0 && mode==NeymanChi2)) {cout << "Error, empty bin " << i << endl; continue;}

         double binmin = _dataB->GetX()[i]-_dataB->GetEXlow()[i];
         double binmax = _dataB->GetX()[i]+_dataB->GetEXhigh()[i];
         double ff = ig.Integral(binmin, binmax)/(binmax-binmin);
         if (ff<0 || ((mode==BCChi2 || mode==PearsonChi2) && ff==0)) {cout << "Error, negative or null function in bin " << i << endl; continue;}
         
         if (mode==BCChi2) testStat += ff - dd + dd*log(dd/ff);
         else if (mode==PearsonChi2) testStat += pow(dd-ff,2)/ff;
         else if (mode==NeymanChi2) testStat += pow(dd-ff,2)/dd;
      }

      if (mode==BCChi2) testStat *= 2.;

      pvalue = TMath::Prob(testStat,_ndat);
   }

   void RooGoF::KSTest(double &pvalue, double &testStat) {unbinnedTest(pvalue,testStat,TSmode::KS);}
   void RooGoF::ADTest(double &pvalue, double &testStat) {unbinnedTest(pvalue,testStat,TSmode::AD);}
   void RooGoF::BCChi2Test(double &pvalue, double &testStat) {binnedTest(pvalue,testStat,TSmode::BCChi2);}
   void RooGoF::PearsonChi2Test(double &pvalue, double &testStat) {binnedTest(pvalue,testStat,TSmode::PearsonChi2);}
   void RooGoF::NeymanChi2Test(double &pvalue, double &testStat) {binnedTest(pvalue,testStat,TSmode::NeymanChi2);}
}
