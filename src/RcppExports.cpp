// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// gvar
List gvar(NumericVector ln, NumericVector ly);
RcppExport SEXP _olsrr_gvar(SEXP lnSEXP, SEXP lySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type ln(lnSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ly(lySEXP);
    rcpp_result_gen = Rcpp::wrap(gvar(ln, ly));
    return rcpp_result_gen;
END_RCPP
}
