output:
	@make --file=lib/libraries.mak libs
	@# Dlls build

test:
	@echo SCIPP TESTING
	@echo -----------
	@g++ -w tests/compile.cpp -o compile
	@./compile
	@rm compile
	@# Compilation test

	@g++ -w tests/macros.cpp -o macros
	@./macros
	@rm macros
	@# Macros test

	@g++ -w tests/types.cpp -o types
	@./types
	@rm types
	@# Data types test

cpplog:
	@cpp lib/Scipp.h