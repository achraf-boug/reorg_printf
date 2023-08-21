#include "putType.h"

/**
 * handler - based on specifier, it executes a function
 * @specifier: specifier to be checked
 * @len: lenght of output
 * @argv: arguments given by user
 * Return: Void
*/

/* {"%u", NULL}, {"%o", NULL}, {"%x", NULL}, {"%X", NULL},
                {"%S", NULL}, {"%p", NULL}}*/
void handler(char specifier[2], int *len, va_list argv)
{
	specifiers specs[] = {{"%c", putCharacter}, {"%s", putString},
		{"%d", putInteger}, {"%i", putInteger}, {"%b", putBinary}};
	int i = 0;

	while (!_strcomp(specs[i].symbole, specifier))
		i++;

	if (specs[i].symbole == NULL)
		(*len) += putString(specifier);
	else
		(*len) += specs[i].f(argv);
}
