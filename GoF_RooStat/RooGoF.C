#include "RooGoF.h"
#include "TError.h"

namespace RooFit {
   RooGoF::RooGoF(RooDataSet *data, RooCurve *curve, const char* varname) {
      _curve = (RooCurve*) curve->Clone("curve_gof");
      _dataB = NULL;
      _themin = 1e99;
      _themax = -1e99;

      // build the dataset
      _ndat = data->numEntries();
      _dataU = new double[_ndat];
      for (int i=0; i<_ndat; i++) {
         _dataU[i] = ((RooRealVar*) data->get(i)->find(varname))->getVal();
         if (_dataU[i]<_themin) _themin = _dataU[i];
         if (_dataU[i]>_themax) _themax = _dataU[i];
      }
   }

   RooGoF::RooGoF(RooHist *hist, RooCurve *curve) {
      _curve = (RooCurve*) curve->Clone("curve_gof");
      _dataB = (RooHist*) hist->Clone("hist_gof");
      _dataU = NULL;
      _ndat = hist->GetN();
      _themin = hist->GetX()[0]-hist->GetEXlow()[0];
      _themax = hist->GetX()[_ndat-1]+hist->GetEXhigh()[_ndat-1];
   }

   RooGoF::~RooGoF() {
      if (_dataU) delete _dataU;
      if (_dataB) delete _dataB;
      if (_curve) delete _curve;
   }

   double RooGoF::curve(double x) {
      if (!_curve) return 0;
      return _curve->Eval(x);
   }

   void RooGoF::setRange(double xmin, double xmax) {
      _themin = xmin;
      _themax = xmax;
   }

   void RooGoF::KSTest(double &pvalue, double &testStat) {
      if (!_dataU) {
         pvalue=0;
         testStat=1e99;
         return;
      }

      // here there are many errors like:
      // Error in <GSLError>: Error 18 in qags.c at 548 : cannot reach tolerance because of roundoff error
      // ... suppress them
      int olderrors = gErrorIgnoreLevel;
      gErrorIgnoreLevel = kBreak;

      ROOT::Math::Functor1D f(this, &RooGoF::curve);
      ROOT::Math::GoFTest* goftest = new ROOT::Math::GoFTest(_ndat, _dataU, f,  ROOT::Math::GoFTest::kPDF, _themin, _themax);  // need to specify am interval
      goftest->KolmogorovSmirnovTest(pvalue, testStat);

      gErrorIgnoreLevel = olderrors;

      delete goftest;
   }

   void RooGoF::ADTest(double &pvalue, double &testStat) {
      if (!_dataU) {
         pvalue=0;
         testStat=1e99;
         return;
      }

      // here there are many errors like:
      // Error in <GSLError>: Error 18 in qags.c at 548 : cannot reach tolerance because of roundoff error
      // ... suppress them
      int olderrors = gErrorIgnoreLevel;
      gErrorIgnoreLevel = kBreak;

      ROOT::Math::Functor1D f(this, &RooGoF::curve);
      ROOT::Math::GoFTest* goftest = new ROOT::Math::GoFTest(_ndat, _dataU, f,  ROOT::Math::GoFTest::kPDF, _themin, _themax);  // need to specify am interval
      goftest->AndersonDarlingTest(pvalue, testStat);

      gErrorIgnoreLevel = olderrors;

      delete goftest;
   }

   void RooGoF::BCChi2Test(double &pvalue, double &testStat) {
      if (!_dataB) {
         pvalue=0;
         testStat=1e99;
         return;
      }

      testStat=0;
      ROOT::Math::Functor1D wf(this, &RooGoF::curve);
      ROOT::Math::Integrator ig(ROOT::Math::IntegrationOneDim::kADAPTIVESINGULAR); 
      ig.SetFunction(wf);
      ig.SetRelTolerance(0.01);
      for (int i=0; i<_ndat; i++) {
         double dd = _dataB->GetY()[i];
         if (dd<0) {cout << "Error, empty bin " << i << endl; continue;}

         double binmin = _dataB->GetX()[i]-_dataB->GetEXlow()[i];
         double binmax = _dataB->GetX()[i]+_dataB->GetEXhigh()[i];
         double ff = ig.Integral(binmin, binmax)/(binmax-binmin);
         if (ff<=0) {cout << "Error, negative or null function in bin " << i << endl; continue;}
         
         testStat += ff - dd + dd*log(dd/ff);
      }

      testStat *= 2.;

      pvalue = TMath::Prob(testStat,_ndat);
   }

   void RooGoF::PearsonChi2Test(double &pvalue, double &testStat) {
      if (!_dataB) {
         pvalue=0;
         testStat=1e99;
         return;
      }

      testStat=0;
      ROOT::Math::Functor1D wf(this, &RooGoF::curve);
      ROOT::Math::Integrator ig(ROOT::Math::IntegrationOneDim::kADAPTIVESINGULAR); 
      ig.SetFunction(wf);
      ig.SetRelTolerance(0.01);
      for (int i=0; i<_ndat; i++) {
         double dd = _dataB->GetY()[i];
         if (dd<0) {cout << "Error, empty bin " << i << endl; continue;}

         double binmin = _dataB->GetX()[i]-_dataB->GetEXlow()[i];
         double binmax = _dataB->GetX()[i]+_dataB->GetEXhigh()[i];
         double ff = ig.Integral(binmin, binmax)/(binmax-binmin);
         if (ff<=0) {cout << "Error, negative or null function in bin " << i << endl; continue;}
         
         testStat += pow(dd-ff,2)/ff;
         // cout << "[" << binmin << ", " << binmax << "]: " << dd << " " << ff << " " << curve((binmin+binmax)/2.) << endl;
      }

      pvalue = TMath::Prob(testStat,_ndat);
   }

   void RooGoF::NeymanChi2Test(double &pvalue, double &testStat) {
      if (!_dataB) {
         pvalue=0;
         testStat=1e99;
         return;
      }

      testStat=0;
      ROOT::Math::Functor1D wf(this, &RooGoF::curve);
      ROOT::Math::Integrator ig(ROOT::Math::IntegrationOneDim::kADAPTIVESINGULAR); 
      ig.SetFunction(wf);
      ig.SetRelTolerance(0.01);
      for (int i=0; i<_ndat; i++) {
         double dd = _dataB->GetY()[i];
         if (dd<=0) {cout << "Error, empty bin " << i << endl; continue;}

         double binmin = _dataB->GetX()[i]-_dataB->GetEXlow()[i];
         double binmax = _dataB->GetX()[i]+_dataB->GetEXhigh()[i];
         double ff = ig.Integral(binmin, binmax)/(binmax-binmin);
         if (ff<0) {cout << "Error, negative or null function in bin " << i << endl; continue;}
         
         testStat += pow(dd-ff,2)/dd;
      }

      pvalue = TMath::Prob(testStat,_ndat);
   }
}
