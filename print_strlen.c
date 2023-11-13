#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: a string pointer to be checked
 * Return: 1
**/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}


/**
 * _strlen_const - applies if the strlen function is a constant char pointer
 * @str: a character pointer
 * Return: 1
**/

int _strlen_const(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
