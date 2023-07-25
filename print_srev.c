#include "main.h"

/**
 * print_srev - Prints a string in reverse.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_srev(va_list args)
{
	char *str = va_arg(args, char*);
	int i, count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
		_putchar(str[i]);

	return (count);
}	
