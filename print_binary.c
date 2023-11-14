#include "main.h"

/**
 * print_binary - print out binary
 * @args: a parameter to be checked
 * Return: 1 or 0
**/

int print_binary(va_list args)
{
	int track = 0;
	int bit_count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int j;

	for (i = 0; i < 32; i++)
	{
		j = ((a << (31 - i)) & num);
		if (j >> (31 - i))
		{
			track = 1;
		}
		if (track)
		{
			b = j >> (31 - i);
			_putchar(b + 48);
			bit_count++;
		}
	}
	if (bit_count == 0)
	{
		bit_count++;
		_putchar('0');
	}
	return (bit_count);
}
