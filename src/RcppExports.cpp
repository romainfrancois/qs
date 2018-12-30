// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// zstd_compressBound
int zstd_compressBound(int size);
RcppExport SEXP _qs_zstd_compressBound(SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(zstd_compressBound(size));
    return rcpp_result_gen;
END_RCPP
}
// is_big_endian
bool is_big_endian();
RcppExport SEXP _qs_is_big_endian() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(is_big_endian());
    return rcpp_result_gen;
END_RCPP
}
// qread
RObject qread(std::string file);
RcppExport SEXP _qs_qread(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(qread(file));
    return rcpp_result_gen;
END_RCPP
}
// qdump
RObject qdump(std::string file);
RcppExport SEXP _qs_qdump(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    rcpp_result_gen = Rcpp::wrap(qdump(file));
    return rcpp_result_gen;
END_RCPP
}
// qsave
void qsave(RObject x, std::string file, int compress_level);
RcppExport SEXP _qs_qsave(SEXP xSEXP, SEXP fileSEXP, SEXP compress_levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< int >::type compress_level(compress_levelSEXP);
    qsave(x, file, compress_level);
    return R_NilValue;
END_RCPP
}
// qs_show_warnings
void qs_show_warnings(bool s);
RcppExport SEXP _qs_qs_show_warnings(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type s(sSEXP);
    qs_show_warnings(s);
    return R_NilValue;
END_RCPP
}
// qs_set_blocksize
void qs_set_blocksize(int s);
RcppExport SEXP _qs_qs_set_blocksize(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    qs_set_blocksize(s);
    return R_NilValue;
END_RCPP
}
// randomStrings
std::vector<std::string> randomStrings(int N, int string_size);
RcppExport SEXP _qs_randomStrings(SEXP NSEXP, SEXP string_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type string_size(string_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(randomStrings(N, string_size));
    return rcpp_result_gen;
END_RCPP
}
// zstd_compress_raw
std::vector<unsigned char> zstd_compress_raw(RawVector x, int compress_level);
RcppExport SEXP _qs_zstd_compress_raw(SEXP xSEXP, SEXP compress_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type compress_level(compress_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(zstd_compress_raw(x, compress_level));
    return rcpp_result_gen;
END_RCPP
}
// zstd_decompress_raw
RawVector zstd_decompress_raw(RawVector x);
RcppExport SEXP _qs_zstd_decompress_raw(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(zstd_decompress_raw(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_qs_zstd_compressBound", (DL_FUNC) &_qs_zstd_compressBound, 1},
    {"_qs_is_big_endian", (DL_FUNC) &_qs_is_big_endian, 0},
    {"_qs_qread", (DL_FUNC) &_qs_qread, 1},
    {"_qs_qdump", (DL_FUNC) &_qs_qdump, 1},
    {"_qs_qsave", (DL_FUNC) &_qs_qsave, 3},
    {"_qs_qs_show_warnings", (DL_FUNC) &_qs_qs_show_warnings, 1},
    {"_qs_qs_set_blocksize", (DL_FUNC) &_qs_qs_set_blocksize, 1},
    {"_qs_randomStrings", (DL_FUNC) &_qs_randomStrings, 2},
    {"_qs_zstd_compress_raw", (DL_FUNC) &_qs_zstd_compress_raw, 2},
    {"_qs_zstd_decompress_raw", (DL_FUNC) &_qs_zstd_decompress_raw, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_qs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
