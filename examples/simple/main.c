#include "module1.h"
#include "module2.h"

#include "cLogger/cLoggerBackend.h"

int main(void) {
	module1_foo();
	module2_foo();

	logger_printModulesInfo();
}
