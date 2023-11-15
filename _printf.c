#include "main.h"

/**
 * _printf - print out to the standard output
 * @format: a parameter to be checked
 * Return: The number of characters printed
**/

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			length += handle_conversion(*format, args);
		}
		else
		{
			_putchar(*format);
			length++;
		}
		format++;
	}
	va_end(args);
	return (length);
}

/**
 * handle_conversion - handle specific conversions
 * @specifier: a parameter to be checked
 * @args: a parameter to be checked
 * Return: The number of characters printed for this conversion
**/

int handle_conversion(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c': return print_char(args);
		case 's': return print_string(args);
		case '%': return print_percent(args);
		case 'd': return print_decimal(args);
		case 'i': return print_int(args);
		case 'u': return print_unsigned(args);
		case 'o': return print_octal(args);
		case 'x': return print_hex(args);
		case 'X': return print_HEX(args);
		case 'p': return print_pointer(args);
		case 'r': return print_reversed_string(args);
		case 'R': return print_rot13(args);

		default:
		_putchar('%');
		_putchar(specifier);
		return (2);
	}
}

