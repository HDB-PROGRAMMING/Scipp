libs:
	@g++ -w -Wall -Wextra -O -ansi -pedantic -fPIC -shared lib/dlls/chemistry.hpp -o lib/bins/chemistry.so
	@# Chemistry library