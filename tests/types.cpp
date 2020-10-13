#include <stdio.h>
#include "../lib/Scipp.h"

int main() {
	try {
		byte O = 79;
		byte K = 75;
		str end = "!!";

		char16 a = 'a';
		char32 b = 'b';
		char64 c = 'c';

		printf("%c%c%s\n", O, K, end);
		return 0;

	} catch(std::exception) {
		printf("ERROR!!\n");

		return -1;
	}
}
//Scipp data types test