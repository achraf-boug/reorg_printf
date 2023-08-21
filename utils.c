#include "utils.h"

/**
 * _putchar - prints character
 * @c: character
 * Return: lenght of character
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - returns the lenght of string
 * @str: string
 * Return: lenght of string
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcomp - compare two strings
 * @str1: first string
 * @str2: second string
 * Return: 1 if equals, 0 if not
*/
int _strcomp(char *str1, char *str2)
{
	int i = 0, len;

	len = _strlen(str1);

	if (_strlen(str2) != len)
		return (0);

	while (i <= len)
		if (str1[i] != str2[i])
			return (0);

	return (1);
}

/**
 * _strcpy - copy const char * into char *
 * @dest: where to copy
 * @src: to copy
 * Return: char *
 */
char *_strcpy(char *dest, const char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}

/**
 * to_binary - converts unsigned int into binary
 * @number: to be converted
 * Return: Binary representation
 */
int to_binary(unsigned int number)
{
	int len = 0;

	if (number > 1)
		len += to_binary(number >> 1);
	len += _putchar('0' + (number & 1));
	return (len);
}
