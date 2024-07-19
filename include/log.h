#pragma once

#include "loguru.h"

#define ATRACE LOG_S(2) << "[TRACE] "
#define ADEBUG LOG_S(1) << "[DEBUG] "
#define AINFO LOG_S(INFO)
#define AWARN LOG_S(WARNING)
#define AERROR LOG_S(ERROR)
#define AFATAL LOG_S(FATAL)

#if 1
#define ATRACE_F(...) LOG_F(2, __VA_ARGS__)
#define ADEBUG_F(...) LOG_F(1, __VA_ARGS__)
#define AINFO_F(...) LOG_F(INFO, __VA_ARGS__)
#define AWARN_F(...) LOG_F(WARNING, __VA_ARGS__)
#define AERROR_F(...) LOG_F(ERROR, __VA_ARGS__)
#define AFATAL_F(...) LOG_F(FATAL, __VA_ARGS__)
#else
#define ATRACE_F(...) RAW_LOG_F(2, __VA_ARGS__)
#define ADEBUG_F(...) RAW_LOG_F(1, __VA_ARGS__)
#define AINFO_F(...) RAW_LOG_F(INFO, __VA_ARGS__)
#define AWARN_F(...) RAW_LOG_F(WARNING, __VA_ARGS__)
#define AERROR_F(...) RAW_LOG_F(ERROR, __VA_ARGS__)
#define AFATAL_F(...) RAW_LOG_F(FATAL, __VA_ARGS__)
#endif

#define ACHECK(cond) CHECK_S(cond)
#define ACHECK_F(cond, ...) CHECK_F(cond, ##__VA_ARGS__)

#define ACHECK_EQ(expr1, expr2) CHECK_EQ_S(expr1, expr2)
#define ACHECK_EQ_F(a, b, ...) CHECK_EQ_F(a, b, ##__VA_ARGS__)

#define ACHECK_LE(expr1, expr2) CHECK_LE_S(expr1, expr2)
#define ACHECK_LE_F(a, b, ...) CHECK_LE_F(a, b, ##__VA_ARGS__)

#define ACHECK_GE(expr1, expr2) CHECK_GE_S(expr1, expr2)
#define ACHECK_GE_F(a, b, ...) CHECK_GE_F(a, b, ##__VA_ARGS__)

#define ACHECK_LT(expr1, expr2) CHECK_LT_S(expr1, expr2)
#define ACHECK_LT_F(a, b, ...) CHECK_LT_F(a, b, ##__VA_ARGS__)

#define ACHECK_GT(expr1, expr2) CHECK_GT_S(expr1, expr2)
#define ACHECK_GT_F(a, b, ...) CHECK_GT_F(a, b, ##__VA_ARGS__)

#define ACHECK_NOTNULL(x) CHECK_NOTNULL_S(x)
#define ACHECK_NOTNULL_F(x, ...) CHECK_NOTNULL_F(x, ##__VA_ARGS__)

/// \brief Converts a custom verbosity level to its corresponding name.
/// \param verbosity The custom verbosity level.
/// \return The name of the custom verbosity level.
const char* CustomVerbosityToName(loguru::Verbosity verbosity);

/// \brief Converts a custom verbosity name to its corresponding level.
/// \param name The name of the custom verbosity level.
/// \return The custom verbosity level.
loguru::Verbosity CustomNameToVerbosity(const char* name);
