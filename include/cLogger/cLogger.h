#pragma once

#include <stdint.h>
#include <string.h>

#include "cLoggerCommon.h"

#define __CLOGGER_FE_0(WHAT)
#define __CLOGGER_FE_1(WHAT, X)       WHAT(1, X)
#define __CLOGGER_FE_2(WHAT, X, ...)  WHAT(2, X)  __CLOGGER_FE_1(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_3(WHAT, X, ...)  WHAT(3, X)  __CLOGGER_FE_2(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_4(WHAT, X, ...)  WHAT(4, X)  __CLOGGER_FE_3(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_5(WHAT, X, ...)  WHAT(5, X)  __CLOGGER_FE_4(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_6(WHAT, X, ...)  WHAT(6, X)  __CLOGGER_FE_5(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_7(WHAT, X, ...)  WHAT(7, X)  __CLOGGER_FE_6(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_8(WHAT, X, ...)  WHAT(8, X)  __CLOGGER_FE_7(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_9(WHAT, X, ...)  WHAT(9, X)  __CLOGGER_FE_8(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_10(WHAT, X, ...) WHAT(10, X) __CLOGGER_FE_9(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_11(WHAT, X, ...) WHAT(11, X) __CLOGGER_FE_10(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_12(WHAT, X, ...) WHAT(12, X) __CLOGGER_FE_11(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_13(WHAT, X, ...) WHAT(13, X) __CLOGGER_FE_12(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_14(WHAT, X, ...) WHAT(14, X) __CLOGGER_FE_13(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_15(WHAT, X, ...) WHAT(15, X) __CLOGGER_FE_14(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_16(WHAT, X, ...) WHAT(16, X) __CLOGGER_FE_15(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_17(WHAT, X, ...) WHAT(17, X) __CLOGGER_FE_16(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_18(WHAT, X, ...) WHAT(18, X) __CLOGGER_FE_17(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_19(WHAT, X, ...) WHAT(19, X) __CLOGGER_FE_18(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_20(WHAT, X, ...) WHAT(20, X) __CLOGGER_FE_19(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_21(WHAT, X, ...) WHAT(21, X) __CLOGGER_FE_20(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_22(WHAT, X, ...) WHAT(22, X) __CLOGGER_FE_21(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_23(WHAT, X, ...) WHAT(23, X) __CLOGGER_FE_22(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_24(WHAT, X, ...) WHAT(24, X) __CLOGGER_FE_23(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_25(WHAT, X, ...) WHAT(25, X) __CLOGGER_FE_24(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_26(WHAT, X, ...) WHAT(26, X) __CLOGGER_FE_25(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_27(WHAT, X, ...) WHAT(27, X) __CLOGGER_FE_26(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_28(WHAT, X, ...) WHAT(28, X) __CLOGGER_FE_27(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_29(WHAT, X, ...) WHAT(29, X) __CLOGGER_FE_28(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_30(WHAT, X, ...) WHAT(30, X) __CLOGGER_FE_29(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_31(WHAT, X, ...) WHAT(31, X) __CLOGGER_FE_30(WHAT, __VA_ARGS__)
#define __CLOGGER_FE_32(WHAT, X, ...) WHAT(32, X) __CLOGGER_FE_31(WHAT, __VA_ARGS__)

#define __CLOGGER_GET_MACRO(_1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,   \
                            _9,  _10, _11, _12, _13, _14, _15, _16,  \
                            _17, _18, _19, _20, _21, _22, _23, _24,  \
                            _25, _26, _27, _28, _29, _30, _31, _32,  \
                            NAME,...) NAME                           \

#define __CLOGGER_FOR_EACH(ACTION,...)                                  \
    __CLOGGER_GET_MACRO(__VA_ARGS__ __VA_OPT__(,)                       \
	__CLOGGER_FE_32, __CLOGGER_FE_31, __CLOGGER_FE_30, __CLOGGER_FE_29,	\
	__CLOGGER_FE_28, __CLOGGER_FE_27, __CLOGGER_FE_26, __CLOGGER_FE_25,	\
	__CLOGGER_FE_24, __CLOGGER_FE_23, __CLOGGER_FE_22, __CLOGGER_FE_21,	\
	__CLOGGER_FE_20, __CLOGGER_FE_19, __CLOGGER_FE_18, __CLOGGER_FE_17,	\
	__CLOGGER_FE_16, __CLOGGER_FE_15, __CLOGGER_FE_14, __CLOGGER_FE_13,	\
	__CLOGGER_FE_12, __CLOGGER_FE_11, __CLOGGER_FE_10, __CLOGGER_FE_9,	\
	__CLOGGER_FE_8,  __CLOGGER_FE_7,  __CLOGGER_FE_6,  __CLOGGER_FE_5,	\
	__CLOGGER_FE_4,  __CLOGGER_FE_3,  __CLOGGER_FE_2,  __CLOGGER_FE_1,	\
	__CLOGGER_FE_0)(ACTION __VA_OPT__(,) __VA_ARGS__)		            \

#define __CLOGGER_COUNT_PARAMS_SIZE(idx, arg) +sizeof(arg)
#define __CLOGGER_CREATE_FIELD(idx, arg) typeof(arg) field_## idx;
#define __CLOGGER_FILL_FIELD(idx, arg) .field_## idx = arg,

void *_cLogger_reserveMemory(uint32_t memory_size);
void _cLogger_commitMessage(const struct _cLoggerMessage *const message);

//TODO: check __LINE__
#define __CLOGGER_LOG(LOG_LEVEL, FORMAT, ...) {                                         \
	if (LOG_LEVEL <= __log_module_info.runtime_log_level) {					            \
		/* calculate total size of passed params */                                     \
		const uint16_t params_size =                                                    \
			(0 __CLOGGER_FOR_EACH(__CLOGGER_COUNT_PARAMS_SIZE, __VA_ARGS__));           \
		/* get handle to memory buffer */                                               \
		uint8_t buffer[256] = {};                                                       \
		struct _cLoggerMessage *const message = (struct _cLoggerMessage *const)buffer;  \
			/*_logger_reserveMemory(sizeof(struct _cLoggerMessage) + params_size);*/    \
		/* fill message struct */                                                       \
		message->log_level = (const uint8_t)LOG_LEVEL;                                  \
		message->module_name = __log_module_info.name;                                  \
		message->source_code_line = (uint16_t)__LINE__;                                 \
		message->format_string = (const char *const)FORMAT;                             \
		message->params_size = (const uint16_t)params_size;                             \
		/* create and fill struct with params */                                        \
		const struct __attribute__ ((__packed__, aligned(1))) loggerPayload {           \
			__CLOGGER_FOR_EACH(__CLOGGER_CREATE_FIELD, __VA_ARGS__)                     \
            char field_dummy;                                                           \
		} params_list = {                                                               \
			__CLOGGER_FOR_EACH(__CLOGGER_FILL_FIELD, __VA_ARGS__)                       \
		};                                                                              \
		memcpy(&message->params_list, &params_list, params_size);                       \
		_cLogger_commitMessage(message);                                                \
	}                                                                                   \
}

/* -------------------------------------------- API -------------------------------------------- */
#include <inttypes.h> /* Included for PRIu8, PRIi64 etc */

#define LOG_LEVEL_NONE	0
#define LOG_LEVEL_ERR	1
#define LOG_LEVEL_WRN	2
#define LOG_LEVEL_INF	3
#define LOG_LEVEL_DBG	4
#define LOG_LEVEL_ALL	5


#define LOGGER_REGISTER_MODULE(NAME, LOG_LEVEL)                                                 \
	static const struct _cLoggerModuleInfo CLOGGER_MODULES_INFO_SECTION __log_module_info = {   \
		.runtime_log_level = LOG_LEVEL,                                                         \
		.name = NAME,                                                                           \
	};                                                                                          \
	static const uint8_t __attribute__((used)) __log_level_static = LOG_LEVEL

#define LOG(log_level, format, ...)                         \
	if (log_level <= __log_level_static) {                  \
		__CLOGGER_LOG(log_level, format, __VA_ARGS__)       \
	}

#define LOG_ERR(format, ...)                                \
	if (LOG_LEVEL_ERR <= __log_level_static) {			    \
		__CLOGGER_LOG(LOG_LEVEL_ERR, format, __VA_ARGS__)   \
	}

#define LOG_WRN(format, ...)						        \
	if (LOG_LEVEL_WRN <= __log_level_static) {			    \
		__CLOGGER_LOG(LOG_LEVEL_WRN, format, __VA_ARGS__)   \
	}

#define LOG_INF(format, ...)						        \
	if (LOG_LEVEL_INF <= __log_level_static) {			    \
		__CLOGGER_LOG(LOG_LEVEL_INF, format, __VA_ARGS__)   \
	}

#define LOG_DBG(format, ...)                                \
	if (LOG_LEVEL_DBG <= __log_level_static) {              \
		__CLOGGER_LOG(LOG_LEVEL_DBG, format, __VA_ARGS__)	\
	}

