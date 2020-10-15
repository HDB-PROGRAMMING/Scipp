#ifndef SCIPP_MACROS
#define SCIPP_MACROS

#if !defined(TRUE) && !defined(FALSE)
 #define TRUE  1
 #define FALSE 0

#endif
//Boolean values

#if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
 #define __OS__ "Win32"
#elif defined(linux) || defined(__CYGWIN__)
 #define __OS__ "LINUX"
#elif (defined(__APPLE__) || defined(__OSX__) || defined(__MACOS__)) && defined(__MACH__)
 #define __OS__ "MacOSX"
#else
 #define __OS__ "UNKNOWN"
 #pragma warning "You aren't using Windows, MacOS or LINUX!!\
We highly recommend you to use one of these 3 operative systems"
#endif
//OS macros

#define toSTR(val)\
	#val

#define tokenize(v1, v2)\
	v1##v2

#define len(arr)\
	sizeof(arr) / sizeof(arr[0])

#define MAX(x, y)\
	x > y ? x : y

#define MIN(x, y)\
	x < y ? x : y
//Scipp macro funcs

#if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
#define __OS__ "WINDOWS"
#include <Windows.h>

#define FORE_COLOR_BLACK  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0)
#define FORE_COLOR_RED    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED)
#define FORE_COLOR_GREEN  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN) 
#define FORE_COLOR_BLUE   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE)
#define FORE_COLOR_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14)
#define FORE_COLOR_PURPLE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5)
#define FORE_COLOR_WHITE  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

#define BACK_COLOR_BLACK  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0)
#define BACK_COLOR_RED    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 192)
#define BACK_COLOR_GREEN  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 160)
#define BACK_COLOR_BLUE   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 144)
#define BACK_COLOR_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224)
#define BACK_COLOR_PURPLE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 80)
#define BACK_COLOR_WHITE  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240)

#elif defined(linux) || defined(__CYGWIN__)
#define __OS__ "LINUX"

#define FORE_COLOR_BLACK  printf("\033[0;30m")
#define FORE_COLOR_RED    printf("\033[31m")
#define FORE_COLOR_GREEN  printf("\033[32m")
#define FORE_COLOR_BLUE   printf("\033[34m")
#define FORE_COLOR_YELLOW printf("\033[1;33m")
#define FORE_COLOR_PURPLE printf("\033[0;35m")
#define FORE_COLOR_WHITE  printf("\033[0m")

#define BACK_COLOR_BLACK  printf("\e[0;30m\u@\h:\W$\e[m")
#define BACK_COLOR_RED    printf("\e[0;31m\u@\h:\W$\e[m")
#define BACK_COLOR_GREEN  printf("\e[0;32m\u@\h:\W$\e[m")
#define BACK_COLOR_BLUE   printf("\e[0;34m\u@\h:\W$\e[m")
#define BACK_COLOR_YELLOW printf("\e[1;33m\u@\h:\W$\e[m")
#define BACK_COLOR_PURPLE printf("\e[0;35m\u@\h:\W$\e[m")
#define BACK_COLOR_WHITE  printf("\e[1;37m\u@\h:\W$\e[m")

#elif (defined(__APPLE__) || defined(__OSX__) || defined(__MACOS__)) && defined(__MACH__)
#define __OS__ "MACOSX"

#define FORE_COLOR_BLACK  printf("\033[0;30m")
#define FORE_COLOR_RED    printf("\033[31m")
#define FORE_COLOR_GREEN  printf("\033[32m")
#define FORE_COLOR_BLUE   printf("\033[34m")
#define FORE_COLOR_YELLOW printf("\033[1;33m")
#define FORE_COLOR_PURPLE printf("\033[0;35m")
#define FORE_COLOR_WHITE  printf("\033[0m")

#define BACK_COLOR_BLACK  printf("\e[0;30m\u@\h:\W$\e[m")
#define BACK_COLOR_RED    printf("\e[0;31m\u@\h:\W$\e[m")
#define BACK_COLOR_GREEN  printf("\e[0;32m\u@\h:\W$\e[m")
#define BACK_COLOR_BLUE   printf("\e[0;34m\u@\h:\W$\e[m")
#define BACK_COLOR_YELLOW printf("\e[1;33m\u@\h:\W$\e[m")
#define BACK_COLOR_PURPLE printf("\e[0;35m\u@\h:\W$\e[m")
#define BACK_COLOR_WHITE  printf("\e[1;37m\u@\h:\W$\e[m")

#endif
// Some console colors

#define UP_KEY    72
#define DOWN_KEY  80
#define LEFT_KEY  75
#define RIGHT_KEY 77

#define ESCAPE    27
#define SPACE     ' '
#define BACKSPACE 8

#define KEY_ONE   49
#define KEY_TWO   50
#define KEY_THREE 51
#define KEY_FOUR  52
#define KEY_FIVE  53
#define KEY_SIX   54
#define KEY_SEVEN 55
#define KEY_EIGHT 56
#define KEY_NINE  57
#define KEY_ZERO  58
//Some keyboard keys

#endif
//Scipp macros