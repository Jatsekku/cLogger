#pragma once
#include <stdint.h>

#define CLOGGER_MODULES_INFO_SECTION                    \
	__attribute__((section("clogger_modules_info")))    \
	__attribute((__used__))

struct _cLoggerModuleInfo {
	uint8_t runtime_log_level;
	const char *const name;
};

//Jacek (TODO): Check real size, alignment?
struct _cLoggerMessage {
	const char *module_name;
	const char *format_string;
	uint16_t source_code_line;
	uint16_t params_size;
	uint8_t log_level;
	uint8_t params_list[];
};

