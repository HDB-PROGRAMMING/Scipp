#ifndef SCIPP_CLI_CONSTS
#define SCIPP_CLI_CONSTS

#if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
#define __OS__     "WINDOWS"
#define SCIPP_PATH "C:\\Scipp\\"

#include <Windows.h>

#define FORE_COLOR_BLACK  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0)
#define FORE_COLOR_RED    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED)
#define FORE_COLOR_GREEN  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN) 
#define FORE_COLOR_BLUE   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE)
#define FORE_COLOR_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14)
#define FORE_COLOR_WHITE  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

#elif defined(linux) || defined(__CYGWIN__)
#define __OS__     "LINUX"
#define SCIPP_PATH "~/Scipp/"

#define FORE_COLOR_BLACK  printf("\033[0;30m")
#define FORE_COLOR_RED    printf("\033[31m")
#define FORE_COLOR_GREEN  printf("\033[32m")
#define FORE_COLOR_BLUE   printf("\033[34m")
#define FORE_COLOR_YELLOW printf("\033[1;33m")
#define FORE_COLOR_WHITE  printf("\033[0m")

#elif (defined(__APPLE__) || defined(__OSX__) || defined(__MACOS__)) && defined(__MACH__)
#define __OS__     "MACOSX"
#define SCIPP_PATH "~/Scipp"

#define FORE_COLOR_BLACK  printf("\033[0;30m")
#define FORE_COLOR_RED    printf("\033[31m")
#define FORE_COLOR_GREEN  printf("\033[32m")
#define FORE_COLOR_BLUE   printf("\033[34m")
#define FORE_COLOR_YELLOW printf("\033[1;33m")
#define FORE_COLOR_WHITE  printf("\033[0m")

#endif
// Here we defined console colors

#endif
//Scipp CLI colors