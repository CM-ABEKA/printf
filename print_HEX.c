#include "main.h"

/**
 * print_HEX - Prints a hexadecimal number.
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int print_HEX(va_list args)
{
	int i;
	int *hex_digits;
	int num = va_arg(args, unsigned int);
	int counter = 0;
	int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;

	hex_digits = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		hex_digits[i] = temp % 16;
		temp /= 16;
	}

	for (i = counter - 1; i >= 0; i--)
	{
		if (hex_digits[i] > 9)
			hex_digits[i] = hex_digits[i] + 7;
		_putchar(hex_digits[i] + '0');
	}

	free(hex_digits);
	return (counter);
}
