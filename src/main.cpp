#include "main.h"

double main::main_add (double x, double y)
{
    return x + y;
}


//' rcpp_main_add
//'
//' @noRd
// [[Rcpp::export]]
Rcpp::List rcpp_main_add (Rcpp::NumericVector vec)
{
    Rcpp::NumericVector res1 (vec.size ()), res2 (vec.size ());
    res1 [0] = res2 [0] = vec [0];
    for (int i = 1; i < vec.size (); i++)
    {
        res1 [i] = main::main_add (res1 [i - 1], vec [i]);
        res2 [i] = sub::sub_add (res2 [i - 1], vec [i]);
    }
    return Rcpp::List::create (
            Rcpp::Named ("main") = res1,
            Rcpp::Named ("sub") = res2);
}
