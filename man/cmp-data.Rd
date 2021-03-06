% Generated by roxygen2 (4.1.1): do not edit by hand
% Please edit documentation in R/cmp-package.R
\docType{data}
\name{cmp-data}
\alias{Buhlmann}
\alias{Lemaire}
\alias{cmp-data}
\alias{insurance}
\title{Insurance Count Datasets}
\format{Each dataset is a matrix with two columns. The first column contains
the levels and the second contains the number of customers who submitted the
corresponding level of claims.}
\source{
Lemaire, Jean. \dQuote{Bonus-Malus Systems for Automobile
Insurance}. Kluwer Academic Publishers, 1995.

Panjer, Harry. \dQuote{Actuarial Mathematics (Proceedings of Symposia in
Applied Mathematics)}. Providence: American Mathematical Society, 1986.
}
\description{
Two auto insurance datasets compiled from published works. The Lemaire
dataset contains published aggregate claim numbers for automobile
third-party liability insurance of a Belgian insurance company in the early
1990's. The Buhlmann dataset originates from aggregate accident claims in
1961 for a class of auto insurance in Switzerland.
}
\examples{
data(insurance)
 Lemaire
 Buhlmann
}
\keyword{datasets}

