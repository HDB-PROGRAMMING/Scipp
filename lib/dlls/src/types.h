#include "dll.h"

DLL_EXPORT typedef void   (*void_ptr)   (void);
DLL_EXPORT typedef void*  (**value_ptr) (void*);
DLL_EXPORT typedef int    (*int_ptr)    (int);
DLL_EXPORT typedef float  (*float_ptr)  (float);
DLL_EXPORT typedef double (*double_ptr) (double);
DLL_EXPORT typedef char   (*char_ptr)   (char);
DLL_EXPORT typedef char*  (**str_ptr)   (char*);
/*Pointer data types*/

DLL_EXPORT typedef short     char16;
DLL_EXPORT typedef int       char32;
DLL_EXPORT typedef long      char64;
DLL_EXPORT typedef long long char128;
DLL_EXPORT typedef char*     str;
/*Text data types*/

DLL_EXPORT typedef const void* val;
DLL_EXPORT typedef void*       var;
/*Void data types*/

DLL_EXPORT typedef unsigned short     ui16;
DLL_EXPORT typedef unsigned int       ui32;
DLL_EXPORT typedef unsigned long      ui64;
DLL_EXPORT typedef unsigned long long ui128;
/*Unsigned data types*/

DLL_EXPORT typedef signed short     si16;
DLL_EXPORT typedef signed int       si32;
DLL_EXPORT typedef signed long      si64;
DLL_EXPORT typedef signed long long si128;
/*Signed data types*/

DLL_EXPORT typedef short       i16;
DLL_EXPORT typedef int         i32;
DLL_EXPORT typedef long        si64;
DLL_EXPORT typedef long long   i128;
DLL_EXPORT typedef float       f32;
DLL_EXPORT typedef double      f64;
DLL_EXPORT typedef long double f128;
/*Base data types*/
