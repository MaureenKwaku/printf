#include "main.h"

/**
 * _putchar - function that prints out the character c to the standard output
 * @c: a parameter to be checked
 * Return: 1 or 0
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
