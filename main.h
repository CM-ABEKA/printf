#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct conversion_match - Matches the conversion
 * specifiers for _printf implementation.
 * @specifier: A char pointer representing the conversion 
 * specifier (e.g. "d", "i", "s" etc.).
 * @handler: A pointer to a function that handles the 
 * corresponding conversion specifier
 *
 * This specifier allows us to map a conversion specifier to 
 * its respective handler function
 */
typedef struct conversion_match
{
	char *id;
	int (*f)();
} conversion_match;

int print_pointer(va_list args);
int print_hex_aux(unsigned long int num);
int print_HEX_aux(unsigned int num);
int print_exclusive_str(va_list args);
int print_HEX(va_list args);
int print_hex(va_list args);
int print_oct(va_list args);
int print_unsigned(va_list args);
int print_bin(va_list args);
int print_srev(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int _strlen(char *s);
int *str_cpy(char *dest, char *src);
int rev_str(char *s);
int print_37(void);
int print_char(va_list args);
int print_str(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
