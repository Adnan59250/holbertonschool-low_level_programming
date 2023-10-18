#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet
 * in lowercase, followed by a new line.
 * can only use _putchar twice in your code
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{

		_putchar(alphabet);
	}

	_putchar('\n');
}
