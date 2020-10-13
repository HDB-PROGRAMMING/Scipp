output:
	@echo NO TARGETS SPECIFIED!!
	@echo Scipp Makefile
	@echo ------------------
	@echo
	@exit 1

test:
	@echo SCIPP TESTING
	@echo -----------
	@g++ -w tests/macros.cpp -o macros
	@./macros
	@rm macros
	@# Macros test

	@g++ -w tests/types.cpp -o types
	@./types
	@rm types
	@# Data types test

	@g++ -w tests/element.cpp -o element
	@./element
	@rm element
	@# Elements test

cpplog:
	@cpp lib/Scipp.h