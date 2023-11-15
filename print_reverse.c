#include "main.h"

/**
 * print_reversed_string - print the string in revers
 * @args: a parameter to be checked
 * Return: returns the length
**/

int print_reversed_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);
	int length = strlen(str);

	if (str == NULL)
	{
		return (-1);
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (length);
}
