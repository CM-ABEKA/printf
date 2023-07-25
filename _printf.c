#include "main.h"

/**
 * _printf - Custom implementation of printf function.
 * @format: Format string with conversion specifiers.
 * Return: Number of characters printed exluding '\0'
 */
int _printf(const char *format, ...)
{
	conversion_match m[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_37}, {"%i", print_int}, {"%d", print_dec},
		{"%r", print_srev}, {"%R", print_rot13},	{"%b", print_bin},
		{"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_exclusive_str}, {"%p", print_pointer}
	};
	va_list args;
	int i = 0, len = 0, j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if ((m[j].id[0] == format[i]) && (m[j].id[1] == format[i + 1]))
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
