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

#endif
//OS macros

#define toSTR(val)\
	#val

#define tokenize(v1, v2)\
	v1##v2

#define len(arr)\
	sizeof(arr) / sizeof(arr[0])

#endif

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
//Scipp macros