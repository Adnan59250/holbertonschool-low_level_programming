#include "main.h"

/**
 * _strlen - function prints length of the string
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
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0' && index < _strlen(str))
	{
		_putchar (str[index]);
		index += 2;
	}
	_putchar('\n');
}
