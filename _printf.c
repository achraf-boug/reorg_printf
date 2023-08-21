#include "main.h"

/**
 * _printf - prints given character and arguments
 * @format: string with specifier
 * @...: undefined numbers of arguments
 * Return: lenght of the output
*/
int _printf(const char *format, ...)
{
	va_list argv;
	int i = 0, len = 0;
	char specifier[2] = "% ";

	if (format == NULL || _strcomp(format, "% "))
		return (-1);

	va_list(argv);
	va_start(argv, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			specifier[1] = format[i];
			handler(specifier, &len, argv);
		}
	}

	va_end(argv);
	return (len);
}
