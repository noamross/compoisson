#include <Rcpp.h>
#include <math.h>
#include "cmp.h"

using namespace Rcpp;

// [[Rcpp::interfaces(r, cpp)]]

//' Compute COM-Poisson Normalizing Constant
//'
//' Computes the normalizing constant in the COM-Poisson model for given values
//' of the parameters.
//'
//' \code{compute_z} computes the COM-Poisson normalizing constant \deqn{
//' }{z = Sum (lambda^j)/(j!^nu) }\deqn{ z = \sum_{i=0}^\infty
//' \frac{\lambda^j}{(j!)^\nu} }{z = Sum (lambda^j)/(j!^nu) }\deqn{ }{z = Sum
//' (lambda^j)/(j!^nu) } to the specified precision. If no precision is
//' specified, then the package default is used.
//'
//' \code{compute_log_z} is equivalent to \code{log(compute_z(lambda,
//' nu))} but provudes additional precision.
//'
//' @aliases compute_z compute_log_z
//' @param lambda Lambda value in COM-Poisson distribution
//' @param nu Nu value in CMP distribution
//' @param log.error Precision in the log of the normalizing constant
//' @return The normalizing constant as a real number with specified precision.
//' @author Jeffrey Dunn
//' @seealso \code{\link{com_fit}}
//' @references Shmueli, G., Minka, T. P., Kadane, J. B., Borle, S. and
//' Boatwright, P., \dQuote{A useful distribution for fitting discrete data:
//' Revival of the Conway-Maxwell-Poisson distribution,} J. Royal Statist. Soc.,
//' v54, pp. 127-142, 2005.
//' @keywords models
//' @examples
//'
//' data(insurance)
//' fit = cmp_fit(Lemaire)
//' z = compute_z(fit$lambda, fit$nu)
//'
//' @export
// [[Rcpp::export]]
double compute_z(double lambda, double nu, double log_error_z = 1e-6, int maxit_z = 10000) {
  return(exp(compute_log_z(lambda, nu, log_error_z, maxit_z = 10000)));
}


//' @export
// [[Rcpp::export]]
double compute_log_z(double lambda, double nu, double log_error_z = 1e-6, int maxit_z = 10000) {  
  // Perform argument checking
  if (lambda < 0 || nu < 0) {
    return NAN;
  }
  
  if (lambda == 0) {
    return 0;
  }
  
  double min_j = exp(log(lambda)/nu);  //Calculate the point at which the series will start to converge
 
  if (min_j > maxit_z) return compute_log_z_approx(lambda, nu);  //Use approximation for long computations
  
  // Initialize values
  double log_z = R_NegInf;
  
  int j = 0;
  while(j <= min_j) {  //Don't bother checking for convergence before the turnpoint
    log_z = logsumexp(log_z, j * log(lambda) - nu * Rcpp::internal::lfactorial(j));
    j += 1;
  }
  double next_term = R_PosInf;
  double upper_bound = R_PosInf;
  while ((upper_bound - log_z) > log_error_z) { //Check for convergence by comparing to geomentric series
    next_term = j * log(lambda) - nu * Rcpp::internal::lfactorial(j);
    upper_bound = logsumexp(log_z, next_term - log(1 - (lambda/pow(j,nu))));
    log_z = logsumexp(log_z, next_term); 
    j += 1;
  }

  return log_z;
  }

//' @export
// [[Rcpp::export]]
double compute_log_z_approx(double lambda, double nu) {
    return nu*pow(lambda, 1/nu) - ((nu-1)/(2*nu))*log(lambda) - ((nu - 1)/2)*log(2*M_PI) - 0.5*log(nu);
  }

//' @export
// [[Rcpp::export]]
double logsumexp(NumericVector x) {
  return(log(sum(exp(x - max(x)))) + max(x));
}


double logsumexp(double x, double y) {
  if (x == R_NegInf) {
    return (y); 
  } else if (y == R_PosInf) {
    return (x); 
  } else if (x > y) {
    return (x + log( 1 + exp(y - x) ) ); 
  } else{
    return (y + log( 1 + exp(x - y) ) ); 
  }
}

//' @export
// [[Rcpp::export]]
double logdiffexp(double x, double y) {
  if (x == R_NegInf) {
		 return NAN; 
  } else if (y == R_NegInf) {
		 return (x); 
  } else if (x == y) {
    return(R_NegInf);
  } else if (y > x) {
    return NAN;
  }  else {
		 return (x + log(1 - exp(y - x))); 
  }
}

//-------------------

//' @export
// [[Rcpp::export]]
double compute_log_z_old(double lambda, double nu, double log_error_z = 0.0001, int maxit_z = 10000) {
  // Perform argument checking
  if (lambda < 0 || nu < 0) {
    return NAN;
  }
  
  // Initialize values
  double z = R_NegInf;
  double z_last = 0;
  int j = 0;
  while ((std::abs(z - z_last) > log_error_z) && j <= maxit_z) {
    z_last = z;
    z = logsumexp(NumericVector::create(z, j * log(lambda) - nu * Rcpp::internal::lfactorial(j)));
    j += 1;
  }

  return z;
}

