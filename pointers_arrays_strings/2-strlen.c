#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable s
 * Return:  lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
