// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __compoisson_RcppExports_h__
#define __compoisson_RcppExports_h__

#include <Rcpp.h>

namespace compoisson {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("compoisson", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("compoisson", "compoisson_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in compoisson");
            }
        }
    }

    inline double compute_z(double lambda, double nu, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_compute_z)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_compute_z p_compute_z = NULL;
        if (p_compute_z == NULL) {
            validateSignature("double(*compute_z)(double,double,double,int)");
            p_compute_z = (Ptr_compute_z)R_GetCCallable("compoisson", "compoisson_compute_z");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_compute_z(Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double compute_log_z(double lambda, double nu, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_compute_log_z)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_compute_log_z p_compute_log_z = NULL;
        if (p_compute_log_z == NULL) {
            validateSignature("double(*compute_log_z)(double,double,double,int)");
            p_compute_log_z = (Ptr_compute_log_z)R_GetCCallable("compoisson", "compoisson_compute_log_z");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_compute_log_z(Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double logsumexp(NumericVector x) {
        typedef SEXP(*Ptr_logsumexp)(SEXP);
        static Ptr_logsumexp p_logsumexp = NULL;
        if (p_logsumexp == NULL) {
            validateSignature("double(*logsumexp)(NumericVector)");
            p_logsumexp = (Ptr_logsumexp)R_GetCCallable("compoisson", "compoisson_logsumexp");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_logsumexp(Rcpp::wrap(x));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double d_com(double x, double lambda, double nu, bool log = false, double z = NA_REAL, double log_error = 0.001, int maxit = 100) {
        typedef SEXP(*Ptr_d_com)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_d_com p_d_com = NULL;
        if (p_d_com == NULL) {
            validateSignature("double(*d_com)(double,double,double,bool,double,double,int)");
            p_d_com = (Ptr_d_com)R_GetCCallable("compoisson", "compoisson_d_com");
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
            p_p_com = (Ptr_p_com)R_GetCCallable("compoisson", "compoisson_p_com");
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
            p_q_com = (Ptr_q_com)R_GetCCallable("compoisson", "compoisson_q_com");
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
            p_r_com = (Ptr_r_com)R_GetCCallable("compoisson", "compoisson_r_com");
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

#endif // __compoisson_RcppExports_h__