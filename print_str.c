#include "main.h"

/**
 * print_string - Prints a string.
 * @args: Arguments.
 * Return: Number of characters printed.
 */
int print_str(va_list args)
{
	char *str;
	int i, len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}

/**
 * _strlen - Returns length of a string.
 * @s: Char Pointer.
 * Return: length.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
