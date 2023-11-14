#include "main.h"

/**
 * print_char - prints out a char
 * @c: a parameter to be checked
 * Return: 1
**/

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}
