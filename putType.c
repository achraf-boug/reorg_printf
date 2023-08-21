#include "putType.h"

/**
 * putCharacter - prints a character
 * @argv: argument to be printed
 * Return: 1 if success
*/
int putCharacter(va_list argv)
{
	return (_putchar(va_arg(argv, int)));
}

/**
 * putString - prints a string
 * @argv: argument to be printed
 * Return: lenght of string
*/
int putString(va_list argv)
{
	char *s = va_arg(argv, char *);
	int len = 0;

	if (s == NULL)
		s = "(nil)";

	while (s[len] != '\0')
	{
		len += _putchar(s[len]);
	}
	return (len);
}

/**
 * putInteger - prints an integer
 * @argv: argument to be printed
 * Return: lenght of integer
*/
int putInteger(va_list argv)
{
	int number = va_arg(argv, int);
	int i = 0, len = 0;
	int digits[10];

	if (number == 0)
		return _putchar('0');

	if (number < 0)
	{
		len += _putchar('-');
		number = -number;
	}

	while (number > 0)
	{
		digits[i] = number % 10;
		number = number /10;
		i++;
	}

	while (i > 0)
	{
		i--;
		len += _putchar(digits[i] + '0');
	}

	return (len);
}

/**
 * putBinary - prints unsigned integer as binary
 * @argv: argument to be printed
 * Return: lenght of binary
*/
int putBinary(va_list argv)
{
	unsigned int number = va_arg(argv, unsigned int);
	int len;

	len = to_binary(number);

	return (len);
}
