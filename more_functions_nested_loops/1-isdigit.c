#include "main.h"

/**
 * _isdigit - function thats checks for a digit 0 throught 9
 * @c: checks the value
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 'O' && c <= '9')
		return (1);
	else
		return (0);
}
