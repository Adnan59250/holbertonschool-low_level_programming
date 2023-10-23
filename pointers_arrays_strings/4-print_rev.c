#include "main.h"

/**
 * _strlen - Write a function that prints a string
 * followed by a new line.
 * @s: variable evaluated
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * print_rev - Prints a string in reverse
 * @s: string reverse
 */


void print_rev(char *s)
{
	int len, i;

	len = _strlen(s) - 1;

	for (i = len; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
