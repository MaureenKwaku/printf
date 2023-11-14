#include "main.h"

/**
 * _printf - a function to print out to the standard output
 * @format: a parameter to be checked
 * Return: length
 **/

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					length += print_char(va_arg(args, int));
					break;
				case 's':
					length += print_string(va_arg(args, char *));
					break;
				case '%':
					_putchar('%');
					length++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					length += 2;
					break;
			}
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
