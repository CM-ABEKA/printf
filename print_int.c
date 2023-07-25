#include "main.h"

/**
 * print_int - Prints an integer.
 * @args: The argument to print.
 *
 * Return: Number of characters printed.
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	int abs_num, digit, place_value = 1;
	int counter = 1;

	abs_num = (num < 0) ? -num : num;

	if (num < 0)
	{
		_putchar('-');
		counter++;
	}

	while (abs_num / 10 != 0)
	{
		place_value *= 10;
		abs_num /= 10;
	}

	while (place_value > 0)
	{
		digit = abs_num / place_value;
		_putchar(digit + '0');
		abs_num %= place_value;
		place_value /= 10;
		counter++;
	}

	return (counter);
}

/**
 * print_dec - Prints decimal.
 * @args: Arguments to print.
 * Return: Number of characters printed.
 */
int print_dec(va_list args)
{
	return (print_int(args));
}
