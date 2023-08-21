#ifndef MAIN_H
#define MAIN_H

#include "putType.h"

void handler(char specifier[2], int *len, va_list argv);
int _printf(const char *format, ...);

#endif

