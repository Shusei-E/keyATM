// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// topicdict_train
List topicdict_train(List model, int iter, int output_per, double eta_1, double eta_2, double eta_1_regular, double eta_2_regular);
RcppExport SEXP _topicdict_topicdict_train(SEXP modelSEXP, SEXP iterSEXP, SEXP output_perSEXP, SEXP eta_1SEXP, SEXP eta_2SEXP, SEXP eta_1_regularSEXP, SEXP eta_2_regularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_per(output_perSEXP);
    Rcpp::traits::input_parameter< double >::type eta_1(eta_1SEXP);
    Rcpp::traits::input_parameter< double >::type eta_2(eta_2SEXP);
    Rcpp::traits::input_parameter< double >::type eta_1_regular(eta_1_regularSEXP);
    Rcpp::traits::input_parameter< double >::type eta_2_regular(eta_2_regularSEXP);
    rcpp_result_gen = Rcpp::wrap(topicdict_train(model, iter, output_per, eta_1, eta_2, eta_1_regular, eta_2_regular));
    return rcpp_result_gen;
END_RCPP
}
// topicdict_train_cov
List topicdict_train_cov(List model, int iter, int output_per, double eta_1, double eta_2, double eta_1_regular, double eta_2_regular);
RcppExport SEXP _topicdict_topicdict_train_cov(SEXP modelSEXP, SEXP iterSEXP, SEXP output_perSEXP, SEXP eta_1SEXP, SEXP eta_2SEXP, SEXP eta_1_regularSEXP, SEXP eta_2_regularSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type output_per(output_perSEXP);
    Rcpp::traits::input_parameter< double >::type eta_1(eta_1SEXP);
    Rcpp::traits::input_parameter< double >::type eta_2(eta_2SEXP);
    Rcpp::traits::input_parameter< double >::type eta_1_regular(eta_1_regularSEXP);
    Rcpp::traits::input_parameter< double >::type eta_2_regular(eta_2_regularSEXP);
    rcpp_result_gen = Rcpp::wrap(topicdict_train_cov(model, iter, output_per, eta_1, eta_2, eta_1_regular, eta_2_regular));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_topicdict_topicdict_train", (DL_FUNC) &_topicdict_topicdict_train, 7},
    {"_topicdict_topicdict_train_cov", (DL_FUNC) &_topicdict_topicdict_train_cov, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_topicdict(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
