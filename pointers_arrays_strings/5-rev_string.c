#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: reverse string
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
 * rev_string - function that reverses a string.
 * @s: reverse string
 */

void rev_string(char *s)
{
	int i, len, tmp;

	len = _strlen(s) - 1;
	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
