#include "cLogger/cLogger.h"
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

LOGGER_REGISTER_MODULE("module1", LOG_LEVEL_ALL);

void module1_foo(void) {
    char c = 'c';
    LOG_DBG("Char: %c$\n", c);

    signed short hi = SHRT_MIN;
    LOG_DBG("Signed short: %hi$\n", hi);

    unsigned short hu = USHRT_MAX;
    LOG_DBG("Unsigned short: %hu$\n", hu);

    signed int i = INT_MIN;
    LOG_DBG("Signed int: %i$\n", i);

    unsigned int u = UINT_MAX;
    LOG_DBG("Unsigned int: %u$\n", u);

    signed long int li = LONG_MIN;
    LOG_DBG("Signed long int: %li$\n", li);

    unsigned long int lu = ULONG_MAX;
    LOG_DBG("Unsigned long int: %lu$\n", lu);

    signed long long int lli = LLONG_MIN;
    LOG_DBG("Signed long long int: %lli$\n", lli);

    unsigned long long int llu = ULLONG_MAX;
    LOG_DBG("Unsigned long long int: %llu$\n", llu);

    uint8_t u8 = UINT8_MAX;
    LOG_DBG("uint8_t: %u8$\n", u8);

    int8_t i8 = INT8_MIN;
    LOG_DBG("int8_t: %i8$\n", i8);

    uint16_t u16 = UINT16_MAX;
    LOG_DBG("uint16_t: %u16$\n", u16);

    int16_t i16 = INT16_MIN;
    LOG_DBG("int16_t: %i16$\n", i16);

    uint32_t u32 = UINT32_MAX;
    LOG_DBG("uint32_t: %u32$\n", u32);

    int32_t i32 = INT32_MIN;
    LOG_DBG("int32_t: %i32$\n", i32);

    uint64_t u64 = UINT64_MAX;
    LOG_DBG("uint64_t: %u64$\n", u64);

    int64_t i64 = INT64_MIN;
    LOG_DBG("int64_t: %i64$\n", i64);

    char *cp = "String passed as a pointer";
    LOG_DBG("*char: %s$\n", cp);

    LOG_DBG("char[]: %st$\n", "String passed as an array");

}
