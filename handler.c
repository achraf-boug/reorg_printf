#include "putType.h"

/**
 * handler - based on specifier, it executes a function
 * @specifier: specifier to be checked
 * @len: lenght of output
 * @argv: arguments given by user
 * Return: Void
*/
void handler(char *specifier, int *len, va_list argv)
{
	specifiers specs[] = {{"%c", putCharacter}, {"%s", putString},
		{"%d", putInteger}, {"%i", putInteger}, {"%b", putBinary}};
	int i = 0;

	while (!_strcomp(specs[i].symbole, specifier))
		i++;

	if (i == 5)
	{
		(*len) += _putchar(specifier[0]);
		(*len) += _putchar(specifier[1]);
	} else
		(*len) += specs[i].f(argv);
}
