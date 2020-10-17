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
		printf("\t-cpp [path]: Set up Scipp for C/C++ in [path]\n");
		printf("\t-py  [path]: Set up Scippy in [path]\n");
		FORE_COLOR_WHITE;
		printf("\n");
		printf("Remove Scipp environment\n");
		FORE_COLOR_YELLOW;
		printf("-remove:\n");
		printf("\t-cpp [path]: Remove Scipp C/C++ from [path]\n");
		printf("\t-py  [path]: Remove Scippy from [path]\n");
		FORE_COLOR_WHITE;
		printf("\n");
		printf("More info at ");
		FORE_COLOR_BLUE;
		printf("https://github.com/HDB-PROGRAMMING/Scipp");
		FORE_COLOR_WHITE;

	} else if (strcmp(argv[1], "init")) {
		if (strcmp(argv[2], "cpp")) {
			if (argc < 4) {
				FORE_COLOR_RED;
				printf("You have not provided a path for the Scipp.h header!!\n");
				FORE_COLOR_WHITE;
				return -1;

			} else {
				FORE_COLOR_YELLOW;
				printf("Getting Scipp.h...\n");
				system(strcat("curl https://hdb-cloud.netlify.app/archive/Scipp/last/Scipp.h -o ", strcat(argv[3], "Scipp.h")));
				FORE_COLOR_GREEN;
				printf("OK!!");
				FORE_COLOR_WHITE;

			}

		} else if (strcmp(argv[2], "py")) {
			if (argc < 4) {
				FORE_COLOR_RED;
				printf("You have not provided a path for the scippy.py file!!\n");
				FORE_COLOR_WHITE;
				return -1;

			} else {
				FORE_COLOR_YELLOW;
				printf("Getting scippy...\n");
				system(strcat("curl https://hdb-cloud.netlify.app/archive/Scipp/last/scippy.py -o ", strcat(argv[3], "scippy.py")));
				FORE_COLOR_GREEN;
				printf("OK!!");
				FORE_COLOR_WHITE;
			}
		}
	} else if (strcmp(argv[1], "remove")) {
		if (strcmp(argv[2], "cpp")) {
			if (argc < 4) {
				FORE_COLOR_RED;
				printf("You have not provided a valid Scipp C/C++ environment!!\n");
				FORE_COLOR_WHITE;
				return -1;

			} else {
				FORE_COLOR_YELLOW;
				printf("Removing Scipp.h...\n");
				system(strcat("rm ", strcat(argv[3], "Scipp.h")));
				FORE_COLOR_GREEN;
				printf("OK!!");
				FORE_COLOR_WHITE;

			}

		}
		else if (strcmp(argv[2], "py")) {
			if (argc < 4) {
				FORE_COLOR_RED;
				printf("You have not provided a valid scippy environment!!\n");
				FORE_COLOR_WHITE;
				return -1;

			} else {
				FORE_COLOR_YELLOW;
				printf("Removing scippy...\n");
				system(strcat("rm ", strcat(argv[3], "scippy.py")));
				FORE_COLOR_GREEN;
				printf("OK!!");
				FORE_COLOR_WHITE;
			}
		}

	} else {
		FORE_COLOR_RED;
		printf(strcat(argv[1], " is not a valid Scipp command!!\n"));
		return -1;
	}

	return 0;
}