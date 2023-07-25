#include "main.h"

/**
 * print_hex - Prints a hexadecimal number.
 * @args: The va_list with the number to print in hexadecimal.
 *
 * Return: The number of characters printed.
 */
int print_hex_aux(unsigned long int num)
{
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;
	unsigned int hex_digit;
	unsigned long int temp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp /= 16;
		count++;
	}

	while (count > 0)
	{
		count--;
		hex_digit = (num >> (count * 4)) & 0xF;
		_putchar(hex_digits[hex_digit]);
	}

	return (count);
}
