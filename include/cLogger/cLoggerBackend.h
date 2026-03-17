#pragma once

#include <stdint.h>


// typedef void loggerEmitLogCallbackFunction(const char *const log, uint16_t log_size);
                           
// void logger_printParamsList(const struct loggerMessage *const message);
// void logger_printMessage(const struct loggerMessage *const message);

/**
 * @brief Print informaation about registered modules
 */
void cLogger_printModulesInfo(void);

/**
 * @brief Set log level for module with specified index
 * 
 * @param[in]  module_index Index of module that has to be set
 * @param[in]  log_level Desired log level
 */
void cLogger_setModuleLogLevelByIndex(uint16_t module_index, uint8_t log_level);

/**
 * @brief Set log level for module with specified name
 *
 * @param[in]  module_name String of module that has to be set
 * @param[in]  log_level Desired log level
 */
void cLogger_setModuleLogLevelByName(char *module_name, uint8_t log_level);
