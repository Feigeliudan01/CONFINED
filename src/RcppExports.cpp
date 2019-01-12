// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// centerCPP
arma::mat centerCPP(arma::mat& x);
RcppExport SEXP _CONFINED_centerCPP(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(centerCPP(x));
    return rcpp_result_gen;
END_RCPP
}
// getUV
arma::mat getUV(arma::mat& x, arma::mat& eigspc);
RcppExport SEXP _CONFINED_getUV(SEXP xSEXP, SEXP eigspcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type eigspc(eigspcSEXP);
    rcpp_result_gen = Rcpp::wrap(getUV(x, eigspc));
    return rcpp_result_gen;
END_RCPP
}
// doRCCA
arma::field<arma::mat> doRCCA(arma::mat& x, arma::mat& y);
RcppExport SEXP _CONFINED_doRCCA(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(doRCCA(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getQCPP
arma::mat getQCPP(arma::mat& x);
RcppExport SEXP _CONFINED_getQCPP(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(getQCPP(x));
    return rcpp_result_gen;
END_RCPP
}
// svdCPP
arma::field<arma::mat> svdCPP(arma::mat x);
RcppExport SEXP _CONFINED_svdCPP(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(svdCPP(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CONFINED_centerCPP", (DL_FUNC) &_CONFINED_centerCPP, 1},
    {"_CONFINED_getUV", (DL_FUNC) &_CONFINED_getUV, 2},
    {"_CONFINED_doRCCA", (DL_FUNC) &_CONFINED_doRCCA, 2},
    {"_CONFINED_getQCPP", (DL_FUNC) &_CONFINED_getQCPP, 1},
    {"_CONFINED_svdCPP", (DL_FUNC) &_CONFINED_svdCPP, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_CONFINED(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}