#ifndef SCIPP_LIBS
#define SCIPP_LIBS

#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include <vector>
//Extern libraries

#ifdef _WIN32
 #define SCIPP_MATHS     "libs\\maths.dll"
 #define SCIPP_CHEMISTRY "libs\\chemistry.dll"
#else
 #define SCIPP_MATHS     "libs/maths.dll"
 #define SCIPP_CHEMISTRY "libs/chemistry.dll"
#endif
//Scipp dlls

#endif
// Scipp libs