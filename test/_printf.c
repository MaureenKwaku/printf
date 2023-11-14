#include "main.h"

/**
 * _printf - a function to print out to the standard output
 * @format: a parameter to be checked
 * Return: length
**/

int _printf(const char *format, ...)
{
	convert p[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_percent},
		{"%i", print_int}, {"%d", print_decimal},
		{"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_string}
	};

	va_list args;
	int i = 0, j = 0, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			for (j = 0; j < 11 && !(p[j].ph[0] == format[i + 1] &&
						(length += p[j].function(args), i += 2)); j++)
				;
			if (j == 11)
			{
				_putchar('%');
				length++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
			i++;
		}
	}
	va_end(args);
	return (length);
}
