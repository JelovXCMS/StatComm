#include "RooHist.h"
#include "RooCurve.h"
#include "RooDataSet.h"
#include "RooAbsPdf.h"
#include "RooAbsReal.h"
#include "RooRealVar.h"

#include "Math/GoFTest.h"
#include "Math/Functor.h"
#include "Math/Integrator.h"
#include "Math/IntegratorMultiDim.h"
#include "Math/AllIntegrationTypes.h"
#include "Math/GaussIntegrator.h"

namespace RooFit {
   class RooGoF {
      public:
         RooGoF(RooHist *hist, RooCurve *curve);
         RooGoF(RooDataSet *data, RooCurve *curve, const char* varname);
         RooGoF(RooDataSet *data, RooAbsPdf *pdf, RooRealVar *poi);
         ~RooGoF();

         double curve(double x);
         double curve_cdf(double x);

         void setRange(double xmin, double xmax);

         void KSTest(double &pvalue, double &testStat);
         void ADTest(double &pvalue, double &testStat);
         void BCChi2Test(double &pvalue, double &testStat);
         void PearsonChi2Test(double &pvalue, double &testStat);
         void NeymanChi2Test(double &pvalue, double &testStat);

         // enum
         enum TSmode {KS, AD, BCChi2, PearsonChi2, NeymanChi2};

      private:
         double     *_dataU;
         RooHist    *_dataB;
         int        _ndat;
         RooCurve   *_curve;
         RooAbsPdf  *_pdf;
         RooAbsReal *_cdf;
         RooRealVar *_poi;
         double     _themin;
         double     _themax;

         // private functions
         void unbinnedTest(double &pvalue, double &testStat, TSmode mode);
         void binnedTest(double &pvalue, double &testStat, TSmode mode);
   };
}
