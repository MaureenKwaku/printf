#include "main.h"

/**
 * print_HEX - prints out hexadecimals in caps
 * @v: a parameter to be checked
 * Return: an integer
**/

int print_HEX(va_list v)
{
	int i = 0;
	int *array;
	int count = 0;
	unsigned int num = va_arg(v, unsigned int);
	unsigned int temp_num = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = temp_num % 16;
		temp_num = temp_num / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		{
			array[i] = array[i] + 7;
		}
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
