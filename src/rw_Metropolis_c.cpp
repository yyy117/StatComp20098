
#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
List rw_Metropolis_c(double sigma, double x0, int N) {
    List out(2);
    NumericVector x(N);
    x[0] = x0;
    DoubleVector u = runif(N);
    int k=0;
    for(int i=1;i < N; i++) {
      double y = as<double>(rnorm(1, x[i-1], sigma));
      if (u[i] <= exp(abs(x[i-1])-abs(y))) {
        x[i] = y;
      }
      else{
        x[i] = x[i-1];
        k = k + 1;
      }
    }
    out[0] = x;
    out[1] = k;
    return (out);
}