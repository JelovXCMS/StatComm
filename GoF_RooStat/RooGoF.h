#include "RooHist.h"
#include "RooCurve.h"
#include "RooDataSet.h"

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
         ~RooGoF();

         double curve(double x);

         void   setRange(double xmin, double xmax);

         void KSTest(double &pvalue, double &testStat);
         void ADTest(double &pvalue, double &testStat);
         void BCChi2Test(double &pvalue, double &testStat);
         void PearsonChi2Test(double &pvalue, double &testStat);
         void NeymanChi2Test(double &pvalue, double &testStat);

      private:
         double   *_dataU;
         RooHist  *_dataB;
         int      _ndat;
         RooCurve *_curve;
         double   _themin;
         double   _themax;
   };
}
