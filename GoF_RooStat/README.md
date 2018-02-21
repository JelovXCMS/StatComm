# A RooFit class for goodness-of-fit tests

## Files in this directory
*  ``RooGoF.C``, ``RooGoF.h``: the goodness-of-fit class
* ``testGoF.C``: how to use this class and how to throw toys to test the output
   * ``data.pdf``: the model used in ``testGoF.C``
   * ``plots.pdf``: the output of ``testGoF.C`` (test statistic values and p-values, from toys)

## The RooGoF class
### Constructors
* ``RooGoF(RooHist *hist, RooCurve *curve)``: for *binned* tests only (chi2 tests). The RooHist and RooCurve can be retrived from a RooPlot.
* ``RooGoF(RooDataSet *data, RooAbsPdf *pdf, RooRealVar *poi)``: for *unbinned* tests only (Kolmogorov-Smirnov or Anderson-Darling).
* ``RooGoF(RooDataSet *data, RooCurve *curve, const char* varname)``: for *unbinned* tests only (gof evaluation will be much slower than with the constructor above).

### Goodness-of-fit functions
For all functions, the p-value and the test statistic are passed as references.
* ``void KSTest(double &pvalue, double &testStat)``: unbinned Kolmogorov-Smirnov test
* ``void ADTest(double &pvalue, double &testStat)``: unbinned Anderson-Darling test
* ``void BCChi2Test(double &pvalue, double &testStat)``: binned Baker-Cousins chi2 test (log likelihood ratio with the saturated model)
* ``void PearsonChi2Test(double &pvalue, double &testStat)``: binned Pearson chi2 test (expected errors)
* ``void NeymanChi2Test(double &pvalue, double &testStat)``: binned Neyman chi2 test (observed errors)
