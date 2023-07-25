#include "main.h"

/**
 * print_hex - Prints a hexadecimal number.
 * @args: The va_list with the number to print in hexadecimal.
 *
 * Return: The number of characters printed.
 */
int print_hex(va_list args)
{
	unsigned int temp, num = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;
	unsigned int hex_digit;
	char hex_char;

	temp = num;
	do {
		temp /= 16;
		count++;
	} while (temp != 0);

	do {
		count--;
		hex_digit = (num >> (count * 4)) & 0xF;
		hex_char = hex_digits[hex_digit];
		_putchar(hex_char);
	} while (count != 0);

	return (count);
}
