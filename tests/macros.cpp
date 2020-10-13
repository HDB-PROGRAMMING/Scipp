#include <stdio.h>
#include "../lib/Scipp.h"

int main() {
	try {
		str OK = "OK!!";

		printf("%s\n", tokenize(O, K));
		return 0;

	} catch(std::exception) {
		printf("ERROR!!\n");

		return -1;
	}
}
//Scipp macros test
