#include "main.h"

/**
 * print_unsigned - Prints an integer.
 * @args: Arguments
 * Return: Number of characters printed.
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 1;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
		n /= 10;
		i++;
	}

	return (i);
}
