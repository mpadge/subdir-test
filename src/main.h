#pragma once

#include <Rcpp.h>
#include "sub/sub.h"

namespace main {

double main_add (double x, double y);

} // end namespace graph

Rcpp::List rcpp_main_add (Rcpp::NumericVector &vec);
