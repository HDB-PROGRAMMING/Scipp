#include <stdio.h>
#include "../lib/cpp/Scipp.h"

int main() {
	try {
		byte O = 79;
		byte K = 75;
		str end = "!!";

		char16 a = 'a';
		char32 b = 'b';
		char64 c = 'c';

		var d = 0;
		var e = NULL;

		printf("%c%c%s\n", O, K, end);
		return 0;

	} catch(std::exception) {
		printf("ERROR!!\n");

		return -1;
	}
}
//Scipp data types test