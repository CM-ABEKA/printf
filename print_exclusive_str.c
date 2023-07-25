#include "main.h"

/**
 * print_exclusive_str - Prints string with special handling
 * for non-printable ASCII characters.
 * @args: The va_list containing the string to print.
 *
 * Return: The length of the string, accounting for
 * special handling.
 */
int print_exclusive_str(va_list args)
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (; *str; str++)
	{
		if ((*str < 32) || (*str >= 127))
		{
			len += _putchar('\\');
			len += _putchar('x');
			len += print_HEX_aux((unsigned char)(*str));
		}
		else
		{
			len += _putchar(*str);
		}
	}

	return (len);
}
