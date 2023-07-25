#include "main.h"

/**
 * print_char - Prints a char.
 * @args: The va_list with character to print.
 * Return: Number of characters printed (1).
 */
int print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);
	return (1);
}
