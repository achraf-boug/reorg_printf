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
	char specifier[3];

	specifier[0] = '%';
	specifier[2] = '\0';

	if (format == NULL || (format[0] == '%' && format[1] == ' '))
		return (-1);

	va_start(argv, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		else
		{
			i++;
			specifier[1] = format[i];
			if (_strcomp(specifier, "%%"))
				len += _putchar('%');
			else
				handler(specifier, &len, argv);
		}
		i++;
	}

	va_end(argv);
	return (len);
}
