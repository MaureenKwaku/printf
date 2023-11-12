#include "main.h"
/**
 * print_string- prints out a string.
 * @v: a parameter to be checked
 * Return: the length of the string
**/

int print_string(va_list v)
{
	char *str;
	int i;
	int length;

	str = va_arg(v, char *);
	if (str == NULL)
	{
		str == "(null)";
		length = _strlen(str);
		for (i = 0, i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
}
