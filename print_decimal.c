#include "main.h"
/**
 * print_decimal - prints out decimals
 * @args: a parameter to be checked
 * Return: an integer
**/
int print_decimal(va_list args)
{
	int n = va_arg(args, int), num, last = n % 10, digit;
	int i = 1, exp = 1;

	n = n / 10, num = n;
	if (last < 0)
	{
		_putchar('-'), num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
