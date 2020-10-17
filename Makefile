output:
	@g++ -w -Wall -Wextra -O -ansi -pedantic -fPIC -shared lib/dlls/src/chemistry.hpp -o lib/bins/chemistry.so
	@gcc -w lib/cli/scipp.c -o lib/bins/scipp
	@# Dlls build

	@python lib/py/setup.py sdist bdist_wheel
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

	@# cp lib/py/scippy/__init__.py lib/py/tests/scippy.py
	@# python lib/py/tests/libs.py
	@# Scippy tests