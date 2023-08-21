#ifndef PUTTYPE
#define PUTTYPE

#include "utils.h"
#include <stdarg.h>

typedef struct specifiers
{
    char symbole[2];
    int (*f)();
}specifiers;

int putCharacter(va_list argv);
int putString(va_list argv);
int putInteger(va_list argv);
int putBinary(va_list argv);

#endif