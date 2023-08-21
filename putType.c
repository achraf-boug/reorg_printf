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

	while (*s != '\0')
	{
		len += _putchar(*s);
		s++;
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

	if (number < 0)
		return (_putchar('-') + putInteger(-number));
	else if (number < 10)
		return (_putchar(number + '0'));
	else
		return (putInteger(number / 10) + putInteger(number % 10));
}

/**
 * putBinary - prints unsigned integer as binary
 * @argv: argument to be printed
 * Return: lenght of binary
*/
int putBinary(va_list argv)
{
	unsigned int number = va_arg(argv, unsigned int);
	int len = 0;

	if (number > 1)
		len += putBinary(number >> 1);
	len += _putchar('0' + (number & 1));
	return (len);
}
