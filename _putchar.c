#include <unistd.h>

/**
 * _putchar - Writes the character c to standard output (stdout).
 * @c: The character to be printed
 *
 * Return: On success, it returns 1.
 * On error, -1 is returned, and errno variable
 * is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
