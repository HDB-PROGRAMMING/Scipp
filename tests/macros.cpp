#include <stdio.h>
#include "../lib/cpp/Scipp.h"

int main() {
	try {
		str OK = "OK!!";

		if (MAX(2, 3) == 3 && MIN(2, 3) == 2) {
			printf("%s\n", tokenize(O, K));
			return 0;

		} else {
			printf("ERROR!!\n");
			return -1;
		}

	} catch(std::exception) {
		printf("ERROR!!\n");

		return -1;
	}
}
//Scipp macros test
