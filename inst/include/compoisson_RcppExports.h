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

    inline double com_compute_z(double lambda, double nu, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_com_compute_z)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_com_compute_z p_com_compute_z = NULL;
        if (p_com_compute_z == NULL) {
            validateSignature("double(*com_compute_z)(double,double,double,int)");
            p_com_compute_z = (Ptr_com_compute_z)R_GetCCallable("compoisson", "compoisson_com_compute_z");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_com_compute_z(Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double com_compute_log_z(double lambda, double nu, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_com_compute_log_z)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_com_compute_log_z p_com_compute_log_z = NULL;
        if (p_com_compute_log_z == NULL) {
            validateSignature("double(*com_compute_log_z)(double,double,double,int)");
            p_com_compute_log_z = (Ptr_com_compute_log_z)R_GetCCallable("compoisson", "compoisson_com_compute_log_z");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_com_compute_log_z(Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline double com_compute_log_z_approx(double lambda, double nu) {
        typedef SEXP(*Ptr_com_compute_log_z_approx)(SEXP,SEXP);
        static Ptr_com_compute_log_z_approx p_com_compute_log_z_approx = NULL;
        if (p_com_compute_log_z_approx == NULL) {
            validateSignature("double(*com_compute_log_z_approx)(double,double)");
            p_com_compute_log_z_approx = (Ptr_com_compute_log_z_approx)R_GetCCallable("compoisson", "compoisson_com_compute_log_z_approx");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_com_compute_log_z_approx(Rcpp::wrap(lambda), Rcpp::wrap(nu));
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

    inline double com_compute_log_z_old(double lambda, double nu, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_com_compute_log_z_old)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_com_compute_log_z_old p_com_compute_log_z_old = NULL;
        if (p_com_compute_log_z_old == NULL) {
            validateSignature("double(*com_compute_log_z_old)(double,double,double,int)");
            p_com_compute_log_z_old = (Ptr_com_compute_log_z_old)R_GetCCallable("compoisson", "compoisson_com_compute_log_z_old");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_com_compute_log_z_old(Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline NumericVector dcom(NumericVector x, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_dcom)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dcom p_dcom = NULL;
        if (p_dcom == NULL) {
            validateSignature("NumericVector(*dcom)(NumericVector,double,double,double,bool,double,int)");
            p_dcom = (Ptr_dcom)R_GetCCallable("compoisson", "compoisson_dcom");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_dcom(Rcpp::wrap(x), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector pcom(NumericVector q, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_pcom)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_pcom p_pcom = NULL;
        if (p_pcom == NULL) {
            validateSignature("NumericVector(*pcom)(NumericVector,double,double,double,bool,double,int)");
            p_pcom = (Ptr_pcom)R_GetCCallable("compoisson", "compoisson_pcom");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_pcom(Rcpp::wrap(q), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector qcom(NumericVector p, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_qcom)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_qcom p_qcom = NULL;
        if (p_qcom == NULL) {
            validateSignature("NumericVector(*qcom)(NumericVector,double,double,double,bool,double,int)");
            p_qcom = (Ptr_qcom)R_GetCCallable("compoisson", "compoisson_qcom");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_qcom(Rcpp::wrap(p), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector rcom(int n, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_rcom)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcom p_rcom = NULL;
        if (p_rcom == NULL) {
            validateSignature("NumericVector(*rcom)(int,double,double,double,bool,double,int)");
            p_rcom = (Ptr_rcom)R_GetCCallable("compoisson", "compoisson_rcom");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rcom(Rcpp::wrap(n), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector dcom_parallel(NumericVector x, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_dcom_parallel)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_dcom_parallel p_dcom_parallel = NULL;
        if (p_dcom_parallel == NULL) {
            validateSignature("NumericVector(*dcom_parallel)(NumericVector,double,double,double,bool,double,int)");
            p_dcom_parallel = (Ptr_dcom_parallel)R_GetCCallable("compoisson", "compoisson_dcom_parallel");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_dcom_parallel(Rcpp::wrap(x), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector pcom_parallel(NumericVector q, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_pcom_parallel)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_pcom_parallel p_pcom_parallel = NULL;
        if (p_pcom_parallel == NULL) {
            validateSignature("NumericVector(*pcom_parallel)(NumericVector,double,double,double,bool,double,int)");
            p_pcom_parallel = (Ptr_pcom_parallel)R_GetCCallable("compoisson", "compoisson_pcom_parallel");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_pcom_parallel(Rcpp::wrap(q), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector qcom_parallel(NumericVector p, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_qcom_parallel)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_qcom_parallel p_qcom_parallel = NULL;
        if (p_qcom_parallel == NULL) {
            validateSignature("NumericVector(*qcom_parallel)(NumericVector,double,double,double,bool,double,int)");
            p_qcom_parallel = (Ptr_qcom_parallel)R_GetCCallable("compoisson", "compoisson_qcom_parallel");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_qcom_parallel(Rcpp::wrap(p), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector rcom_parallel(int n, double lambda, double nu, double z = NA_REAL, bool log = false, double log_error = 0.001, int maxit = 1000) {
        typedef SEXP(*Ptr_rcom_parallel)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_rcom_parallel p_rcom_parallel = NULL;
        if (p_rcom_parallel == NULL) {
            validateSignature("NumericVector(*rcom_parallel)(int,double,double,double,bool,double,int)");
            p_rcom_parallel = (Ptr_rcom_parallel)R_GetCCallable("compoisson", "compoisson_rcom_parallel");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rcom_parallel(Rcpp::wrap(n), Rcpp::wrap(lambda), Rcpp::wrap(nu), Rcpp::wrap(z), Rcpp::wrap(log), Rcpp::wrap(log_error), Rcpp::wrap(maxit));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

}

#endif // __compoisson_RcppExports_h__
