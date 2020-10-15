output:
	@g++ -w -Wall -Wextra -O -ansi -pedantic -fPIC -shared lib/dlls/src/chemistry.hpp -o lib/dlls/bins/chemistry.so
	@# Chemistry library