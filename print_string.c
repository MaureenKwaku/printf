#include "main.h"
/**
 * print_string- prints out a string.
 * @args: a parameter to be checked
 * Return: the length of the string
**/

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int length = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		_putchar(*str);
		length++;
		str++;
	}
	return (length);
}
