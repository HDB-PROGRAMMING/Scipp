#include <stdio.h>
#include "../lib/Scipp.h"

using namespace elements;

int main() {
	try {
		element* el = new element("TEST", "T", 2, "This is a test");

		printf("OK!!\n");
		return 0;

	} catch(std::exception) {
		printf("ERROR!!\n");

		return -1;
	}
}
//Scipp elements test