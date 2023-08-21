#ifndef PUTTYPE
#define PUTTYPE

#include "utils.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specifiers - Struct specifiers
 *
 * @symbole: specifier
 * @f: function to execute
 */
typedef struct specifiers
{
	char symbole[2];
	int (*f)(va_list);
} specifiers;

int putCharacter(va_list argv);
int putString(va_list argv);
int putInteger(va_list argv);
int putBinary(va_list argv);

#endif

