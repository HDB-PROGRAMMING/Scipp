#ifndef SCIPP_DLLUTILS
#define SCIPP_DLLUTILS

#ifdef _WIN32
 #define DLL_EXPORT __declspec(dllexport)
 #define SCIPP_PATH "C:/Scipp/"

#else
 #define DLL_EXPORT
 #define SCIPP_PATH "/Scipp/"

#endif

#endif
/*Scipp dll utils*/
