#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @args: input args(variadic arguments)
 *
 * Return: Length of the output string (not including null byte)
 */
int rot13(va_list args)
{
	int i, j, count = 0;
	char *s = va_arg(args, char*);
	char data_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data_rotation[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
		int rotated = 0;

		for (j = 0; j < 52; j++)
		{
			if (s[i] == data_input[j])
			{
				_putchar(data_rotation[j]);
				count++;
				rotated = 1;
				break;
			}
		}
		if (!rotated)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
