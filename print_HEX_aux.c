#include "main.h"

/**
 * print_hexadecimal_number - Prints an hexadecimal number.
 * @num: The number to print in hexadecimal format.
 *
 * Return: The number of characters printed.
 */
int print_HEX_aux(unsigned int num)
{
	char hex_digits[] = "0123456789ABCDEF";
	int counter = 0;

	if (num / 16 != 0)
	{
		counter += print_HEX_aux(num / 16);
	}
	_putchar(hex_digits[num % 16]);
	counter++;

	return (counter);
}
