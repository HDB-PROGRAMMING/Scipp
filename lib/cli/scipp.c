/* Scipp CLI main file
 * by Henry Díaz
 *
 * MIT Licensed
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "consts.h"
//Necesary libs

int main(int argc, const char* argv[]) {
	if (argc < 2) {
		FORE_COLOR_BLUE;
		printf("Scipp CLI, simple data science:\n");
		FORE_COLOR_WHITE;
		printf("\n");
		printf("Set up Scipp environment\n");
		FORE_COLOR_YELLOW;
		printf("-init:\n");
		printf("\t-cpp [path]: Set up Scipp for C++ in [path]\n");
		printf("\t-py:         Set up Scipp for python\n");
		FORE_COLOR_WHITE;

	} else if (strcmp(argv[1], "init")) {
		if (strcmp(argv[2], "cpp")) {
			if (argc < 4) {
				FORE_COLOR_RED;
				printf("You have not provided a path for the Scipp.h header!!\n");
				FORE_COLOR_WHITE;
				return -1;
			}
			if (strcmp(__OS__, "Win32")) {
				FORE_COLOR_YELLOW;
				printf("Getting Scipp.h...\n");
				system(strcat("curl https://hdb-cloud.netlify.app/archive/Scipp/last/Scipp.h -o ", strcat(argv[3], "\\Scipp.h")));
				FORE_COLOR_GREEN;
				printf("OK!!");
				FORE_COLOR_WHITE;

			} else {
				FORE_COLOR_YELLOW;
				printf("Getting Scipp.h...\n");
				system(strcat("curl https://hdb-cloud.netlify.app/archive/Scipp/last/Scipp.h -o ", strcat(argv[3], "Scipp.h")));
				FORE_COLOR_GREEN;
				printf("OK!!");
				FORE_COLOR_WHITE;
			}

		} else if (strcmp(argv[2], "python")) {
			system("pip install scippy");
		}
	}

	return 0;
}