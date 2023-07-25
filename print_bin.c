#include "main.h"

/**
 * print_bin - Prints a binary number.
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int print_bin(va_list args)
{
	int count = 0, bit;
	unsigned int num = va_arg(args, unsigned int);
	int msb;

	for (msb = 31; msb >= 0; msb--)
	{
		if ((num >> msb) & 1)
			break;
	}

	for (; msb >= 0; msb--)
	{
		bit = (num >> msb) & 1;
		_putchar(bit + '0');
		count++;
	}

	if (count == 0)
	{
		_putchar('0');
		count++;
	}

	return (count);
}
