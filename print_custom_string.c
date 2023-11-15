#include "main.h"
#include <stdarg.h>

/**
 * print_custom_string - a program that prints a string with custom handling
 * @args: Variadic arguments
 * Return: Number of characters printed
 */
int print_custom_string(va_list args)
{
	char *str = va_arg(args, char *);
	int length = 0;

	if (str != NULL)
	{
		length += print_custom_str(str);
	}
	else
	{
		length += print_custom_str("(null)");
	}
	return length;
}

/**
 * print_custom_str - a function that prints a string with custom handling
 * @str: String to be printed
 * Return: Number of characters printed
 */
int print_custom_str(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			/* Print non-printable characters as \x followed by ASCII code in hexadecimal*/
			_putchar('\\');
			_putchar('x');
			length += 2; /* Counting the \x */
			length += print_hex_value(*str);
		}
		else
		{
			_putchar(*str);
			length++;
		}
		str++;
	}
	return length;
}

/**
 * print_hex_value - a function that print an ASCII value in hexadecimal
 * @value: ASCII value to be printed
 * Return: Number of characters printed
 */
int print_hex_value(char value)
{
	char hex_digits[] = "0123456789ABCDEF";
	int length = 0;

	_putchar(hex_digits[(value >> 4) & 0xF]); /* Print high 4 bits*/
	_putchar(hex_digits[value & 0xF]);        /* Print low 4 bits*/

	length += 2; /* Two characters printed for hexadecimal value*/

	return length;
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1, on error -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
