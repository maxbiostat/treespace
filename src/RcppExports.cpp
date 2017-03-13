// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// updateDistancesWithCombinations
void updateDistancesWithCombinations(NumericVector& length_root_distances, NumericVector& topological_root_distances, IntegerVector& left_partition, IntegerVector& right_partition, IntegerVector& index_offsets, double distance_to_root, int edges_to_root);
RcppExport SEXP treescape_updateDistancesWithCombinations(SEXP length_root_distancesSEXP, SEXP topological_root_distancesSEXP, SEXP left_partitionSEXP, SEXP right_partitionSEXP, SEXP index_offsetsSEXP, SEXP distance_to_rootSEXP, SEXP edges_to_rootSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type length_root_distances(length_root_distancesSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type topological_root_distances(topological_root_distancesSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type left_partition(left_partitionSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type right_partition(right_partitionSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type index_offsets(index_offsetsSEXP);
    Rcpp::traits::input_parameter< double >::type distance_to_root(distance_to_rootSEXP);
    Rcpp::traits::input_parameter< int >::type edges_to_root(edges_to_rootSEXP);
    updateDistancesWithCombinations(length_root_distances, topological_root_distances, left_partition, right_partition, index_offsets, distance_to_root, edges_to_root);
    return R_NilValue;
END_RCPP
}
