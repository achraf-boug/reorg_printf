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
	char *output = NULL;
	char specifier[2] = "% ";

	output = _strcpy(output, format);
	if (output == NULL || _strcomp(output, "% "))
		return (-1);

	va_start(argv, format);
	while (output[i] != '\0')
	{
		if (output[i] != '%')
			len += _putchar(output[i]);
		else
		{
			i++;
			specifier[1] = output[i];
			if (_strcomp(specifier, "%%"))
				len += _putchar('%');
			else
				handler(specifier, &len, argv);
		}
	}

	va_end(argv);
	return (len);
}
