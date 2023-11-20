#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer to be checked
 * @function: function for the conversion specifier
 */

typedef struct format
{
	char *ph;
	int (*function)(va_list args);
}  convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int _strlen(char *str);
int _strlen_const(const char *str);
int print_percent(va_list args);
int print_int(va_list args);
int print_decimal(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_unknown(va_list v);
int handle_conversion(char specifier, va_list args);
int print_pointer(va_list args);
int print_hex_recursive(unsigned long int n);
int print_reversed_string(va_list args);
int print_rot13(va_list args);
int print_custom_string(va_list args);
int print_custom_str(char *str);
int print_hex_value(char value);

#endif
