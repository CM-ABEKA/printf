#include "main.h"

/**
 * print_pointer - Prints pointer address in hexadecimal.
 * @args: The va_list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
	void *ptr;
	char *null_str = "(nil)";
	long int address;
	int i, count = 0;

	ptr = va_arg(args, void *);

	if (ptr == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++)
		{
			_putchar(null_str[i]);
		}
		return (i);
	}

	address = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');

	count = print_hex_aux(address);
	return (count + 2);
}
