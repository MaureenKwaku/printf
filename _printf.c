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
		{"%%", print_percent}, {"%i", print_int},
		{"%d", print_decimal}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_octal},
		{"%x", print_hex}, {"%r", print_unknown},
		{"%X", print_HEX}
	};

	va_list args;
	int i = 0;
	int j = 0;
	int length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
