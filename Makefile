output:
	@make --file=lib/dlls/dlls.mak
	@make --file=lib/cli/scipp_cli.mak
	@# Dlls build

	@make --file=lib/py/scippy.mak
	@# Scippy build

test:
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

	@echo ""

	@make --file=lib/py/scippy.mak test
	@# Scippy tests