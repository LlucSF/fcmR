// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// C_fuzzyCmeansROIs
Rcpp::List C_fuzzyCmeansROIs(NumericMatrix peakMatrix, NumericVector ROIs, int numPeaks, int numPixels, int numClusters, int m, int maxIterations, double epsilon, bool verbose);
RcppExport SEXP _fcmR_C_fuzzyCmeansROIs(SEXP peakMatrixSEXP, SEXP ROIsSEXP, SEXP numPeaksSEXP, SEXP numPixelsSEXP, SEXP numClustersSEXP, SEXP mSEXP, SEXP maxIterationsSEXP, SEXP epsilonSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type peakMatrix(peakMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ROIs(ROIsSEXP);
    Rcpp::traits::input_parameter< int >::type numPeaks(numPeaksSEXP);
    Rcpp::traits::input_parameter< int >::type numPixels(numPixelsSEXP);
    Rcpp::traits::input_parameter< int >::type numClusters(numClustersSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type maxIterations(maxIterationsSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(C_fuzzyCmeansROIs(peakMatrix, ROIs, numPeaks, numPixels, numClusters, m, maxIterations, epsilon, verbose));
    return rcpp_result_gen;
END_RCPP
}
// C_fuzzyCmeansRandom
Rcpp::List C_fuzzyCmeansRandom(NumericMatrix peakMatrix, int numPeaks, int numPixels, int numClusters, int m, int maxIterations, double epsilon, bool verbose);
RcppExport SEXP _fcmR_C_fuzzyCmeansRandom(SEXP peakMatrixSEXP, SEXP numPeaksSEXP, SEXP numPixelsSEXP, SEXP numClustersSEXP, SEXP mSEXP, SEXP maxIterationsSEXP, SEXP epsilonSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type peakMatrix(peakMatrixSEXP);
    Rcpp::traits::input_parameter< int >::type numPeaks(numPeaksSEXP);
    Rcpp::traits::input_parameter< int >::type numPixels(numPixelsSEXP);
    Rcpp::traits::input_parameter< int >::type numClusters(numClustersSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type maxIterations(maxIterationsSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(C_fuzzyCmeansRandom(peakMatrix, numPeaks, numPixels, numClusters, m, maxIterations, epsilon, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fcmR_C_fuzzyCmeansROIs", (DL_FUNC) &_fcmR_C_fuzzyCmeansROIs, 9},
    {"_fcmR_C_fuzzyCmeansRandom", (DL_FUNC) &_fcmR_C_fuzzyCmeansRandom, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_fcmR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}