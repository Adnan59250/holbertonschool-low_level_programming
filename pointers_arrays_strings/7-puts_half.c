#include "main.h"

/**
 *  * _strlen - function prints length of the string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	return (lenght);
}

/**
 * puts_half - Write a function that prints half of a string
 * followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
	int lenght = _strlen(str);
	int start = (lenght + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar ('\n');
}
