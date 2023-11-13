#include "main.h"

/**
 * print_octal - prints out octal convertions
 * @v: a parameter to be checked
 * Return: count
**/

int print_octal(va_list v)
{
	int i = 0;
	int count = 0;
	int *array;
	unsigned int num = va_arg(v, unsigned int);
	unsigned int temp_num = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;

	array = malloc(sizeof(int) * count);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		array[i] = temp_num % 8;
		temp_num = temp_num / 8;
	}
	for (i = count - i; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);

	return (count);
}
