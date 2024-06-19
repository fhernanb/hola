#include <Rcpp.h>
using namespace Rcpp;

//' Media de un vector usan C++.
//' @param x numeric vector
//' @export
//' @return la media.
// [[Rcpp::export]]
double meanC(NumericVector x) {
  int n = x.size();
  double total = 0;
  
  for(int i = 0; i < n; ++i) {
    total += x[i];
  }
  return total / n;
}