#include "main.h"

/**
 * print_rot13 - Prints a string with ROT13 encryption.
 * @args: The va_list containint the string to print.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;
	char c, rot13_table[256] = {0};

	if (str == NULL)
	{
		for (i = 0; "(null)"[i]; i++)
		{
			_putchar("(null)"[i]);
			count++;
		}
		return (count);
	}

	for (i = 0; i < 26; i++)
	{
		rot13_table['a' + i] = 'n' + i;
		rot13_table['A' + i] = 'N' + i;
		rot13_table['n' + i] = 'a' + i;
		rot13_table['N' + i] = 'A' + i;
	}

	for (i = 0; str[i]; i++)
	{
		c = rot13_table[(int)str[i]];
		if (c == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(c);
			count++;
		}
	}

	return (count);
}

