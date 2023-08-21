#include "putType.h"

/**
 * handler - based on specifier, it executes a function
 * @specifier: specifier to be checked
 * @len: lenght of output
 * @argv: arguments given by user
 * Return: Void
*/

void handler(char specifier[2], int *len, va_list argv)
{
    specifiers specs[] = {
        {"%c", putCharacter},
        {"%s", putString},
        {"%%", _putchar},
        {"%d", putInteger},
        {"%i", putInteger},
        {"%b", putBinary},
        {"%u", NULL},
        {"%o", NULL},
        {"%x", NULL},
        {"%X", NULL},
        {"%S", NULL},
        {"%p", NULL},
        {NULL, NULL}
        };
    int i = 0;

    while (specs[i].symbole != NULL && !strcomp(specs[i], specifier))
        i++;
    if (specs[i].symbole == NULL)
        (*len) += _putString(specifier);
    else
        (*len) += specs[i].f(argv);
}