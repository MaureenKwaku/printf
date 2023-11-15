#include "main.h"

/**
 * print_pointer - prints out a pointer address
 * @args: a parameter to be checked
 * Return: The number of characters printed for the pointer
**/

int print_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int address = (unsigned long int)ptr;
	int count = 0;

	_putchar('0');
	_putchar('x');
	count += 2;

	if (address == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_hex_recursive(address);
	}
	return (count);
}

/**
 * print_hex_recursive - recursively prints hexadecimal
 * @n: a parameter to be checked
 * Return: The number of characters printed for the hexadecimal
**/

int print_hex_recursive(unsigned long int n)
{
	int count = 0;

	if (n == 0)
	{
		return (count);
	}
	count += print_hex_recursive(n / 16);

	if (n % 16 < 10)
	{
		_putchar(n % 16 + '0');
		count++;
	}
	else
	{
		_putchar(n % 16 - 10 + 'a');
		count++;
	}
	return (count);
}
