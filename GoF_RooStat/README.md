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
The chi2 test functions take as optional parameter d_ndf, the number of free parameters in the fit.
* ``void KSTest(double &pvalue, double &testStat)``: unbinned Kolmogorov-Smirnov test
* ``void ADTest(double &pvalue, double &testStat)``: unbinned Anderson-Darling test
* ``void BCChi2Test(double &pvalue, double &testStat, int d_ndf=0)``: binned Baker-Cousins chi2 test (log likelihood ratio with the saturated model): RECOMMENDED
* ``void PearsonChi2Test(double &pvalue, double &testStat, int d_ndf=0)``: binned Pearson chi2 test (expected errors)
* ``void NeymanChi2Test(double &pvalue, double &testStat, int d_ndf=0)``: binned Neyman chi2 test (observed errors) -- NOT RECOMMENDED
* ``void RooFitChi2Test(double &pvalue, double &testStat, int d_ndf=0)``: default RooFit chi2 test (using observed errors) -- NOT RECOMMENDED

### Toys
In the case of the AD and KS tests, it is possible to estimate their expected distribution from toy experiments
* ``setNtoys(int nToys, bool doReFit=true, const RooCmsArg &arg1=RooCmsArg::none(), ...)``: set the desired number of toys, specify if the model should be refitted in each toy, and specify optional fitting arguments.
* ``setSamplingDist_AD(SamplingDistribution *sd)``: recycle existing RooStats::SamplingDistribution for the AD test statistic
* ``setSamplingDist_KS(SamplingDistribution *sd)``: recycle existing RooStats::SamplingDistribution for the KS test statistic
* ``getSamplingDist_AD()``: get the distribution of the AD test statistic
* ``getSamplingDist_KS()``: get the distribution of the KS test statistic

### Other
* ``setRange(double xmin, double xmax)``: set the range in which to compute the test
* ``setRebin(int min_bincontent)``: set the minimum bin content. Bins below this value will be merged. (Default: equal to 0, no merging is done)

## More information
See [these slides](https://indico.cern.ch/event/706009/contributions/2906952/attachments/1607035/2550282/chapon_GoF_20180226.pdf).
