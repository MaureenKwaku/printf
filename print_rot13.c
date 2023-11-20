#include "main.h"

/**
 * print_rot13 - a function that encodes a string using rot13
 * @args: input args(variadic arguments)
 *
 * Return: Number of chars printed
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0;

	if (str == NULL)
		return (-1);
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			char base = (*str >= 'a') ? 'a' : 'A';
			
			_putchar(((*str - base + 13) % 26) + base);
			count++;
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	return (count);
}
