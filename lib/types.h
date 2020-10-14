#ifndef SCIPP_TYPES
#define SCIPP_TYPES

typedef void*  (**value_ptr) (void*);

typedef int    (*int_ptr)    (int);

typedef float  (*float_ptr)  (float);
typedef double (*double_ptr) (double);

typedef char*  (**str_ptr)   (char*);
//Function pointer data types

typedef char byte;

typedef short char16;
typedef int   char32;
typedef long  char64;

typedef const void val;
typedef void*      var;

typedef char* str;
//Non-pointer data types

#endif
//Scipp data types