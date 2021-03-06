% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/StatComp20098.R
\name{EM}
\alias{EM}
\title{EM algorithm}
\usage{
EM(dat, k, init_param)
}
\arguments{
\item{dat}{training set(matrix)}

\item{k}{The number of Gaussian components (numeric)}

\item{init_param}{initial value of parameters (list)}
}
\value{
a list of parameters of GMM  (weight,mu,sigma)
}
\description{
Using EM algorithm to estimate the parameters of GMM
}
\examples{
\dontrun{
param <- EM(A_train,2,weight,mu,sigma)
}
}
