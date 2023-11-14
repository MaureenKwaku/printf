#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer to be checked
 * @function: function for the conversion specifier
 */

typedef struct format
{
	char *ph;
	int (*function)();
}  convert;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list v);
int print_string(va_list v);
int _strlen(char *str);
int _strlen_const(const char *str);
int print_percent(void);
int print_int(va_list args);
int print_decimal(va_list args);
int print_binary(va_list v);
int print_unsigned(va_list args);
int print_octal(va_list v);
int print_hex(va_list v);
int print_HEX(va_list v);
int print_unknown(va_list v);

#endif
