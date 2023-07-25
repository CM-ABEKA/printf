#include "main.h"

/**
 * printf_oct - prints an octal number.
 * @val: arguments.
 * Return: number of characters printed.
 */
int print_oct(va_list args)
{
	unsigned int temp, num = va_arg(args, unsigned int);
	int i, count = 0, *octal_digits;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	temp = num;
	while (temp != 0)
	{
		temp /= 8;
		count++;
	}

	octal_digits = malloc(count * sizeof(int));
	if (octal_digits == NULL)
	{
		return (-1);
	}

	for (i = count - 1; i >= 0; i--)
	{
		octal_digits[i] = num % 8;
		num /= 8;
	}

	for (i = 0; i < count; i++)
		_putchar(octal_digits[i] + '0');

	free(octal_digits);
	return (count);
}
