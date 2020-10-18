#ifndef SCIPP_LIBS
#define SCIPP_LIBS

#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
/*Extern libraries*/

#ifdef _WIN32
 #define SCIPP_MATHS "libs\\maths.dll"
 #define SCIPP_TYPES "libs\\types.dll"
#else
 #define SCIPP_MATHS "libs/maths.so"
 #define SCIPP_TYPES "libs/types.so"
#endif
/*Scipp dlls*/

#endif
/*Scipp libs*/