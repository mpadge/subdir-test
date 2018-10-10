#' subdiradd
#'
#' @param x A vector
#' @return A list containing two identical cumulative sums
#' @export
subdiradd <- function (x)
{
    y <- rcpp_main_add (x)
    return (y)
}
