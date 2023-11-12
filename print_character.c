#include "main.h"

/**
 * print_char - prints out a char
 * @v: a parameter to be checked
 * Return: 1
**/

int print_char(va_list v)
{
	char str;

	str = va_arg(v, int);
	_putchar(str);
	return (1);
}
