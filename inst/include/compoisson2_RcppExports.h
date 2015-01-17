// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __compoisson2_RcppExports_h__
#define __compoisson2_RcppExports_h__

#include <Rcpp.h>

namespace compoisson2 {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("compoisson2", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("compoisson2", "compoisson2_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in compoisson2");
            }
        }
    }

    inline double d_com(double x, double lambda, double nu, bool log = false, double z = NA_REAL, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_d_com)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_d_com p_d_com = NULL;
        if (p_d_com == NULL) {
            validateSignature("double(*d_com)(double,double,double,bool,double,double,int)");
            p_d_com = (Ptr_d_com)R_GetCCallable("compoisson2", "compoisson2_d_com");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_d_com(Rcpp::wrap(x), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log), Rcpp::wrap(z), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double p_com(double q, double lambda, double nu, bool log = false, double z = NA_REAL, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_p_com)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_p_com p_p_com = NULL;
        if (p_p_com == NULL) {
            validateSignature("double(*p_com)(double,double,double,bool,double,double,int)");
            p_p_com = (Ptr_p_com)R_GetCCallable("compoisson2", "compoisson2_p_com");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_p_com(Rcpp::wrap(q), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log), Rcpp::wrap(z), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline int q_com(double p, double lambda, double nu, bool log = false, double z = NA_REAL, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_q_com)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_q_com p_q_com = NULL;
        if (p_q_com == NULL) {
            validateSignature("int(*q_com)(double,double,double,bool,double,double,int)");
            p_q_com = (Ptr_q_com)R_GetCCallable("compoisson2", "compoisson2_q_com");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_q_com(Rcpp::wrap(p), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log), Rcpp::wrap(z), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline NumericVector r_com(int n, double lambda, double nu, bool log = false, double z = NA_REAL, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_r_com)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_r_com p_r_com = NULL;
        if (p_r_com == NULL) {
            validateSignature("NumericVector(*r_com)(int,double,double,bool,double,double,int)");
            p_r_com = (Ptr_r_com)R_GetCCallable("compoisson2", "compoisson2_r_com");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_r_com(Rcpp::wrap(n), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log), Rcpp::wrap(z), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

}

#endif // __compoisson2_RcppExports_h__
