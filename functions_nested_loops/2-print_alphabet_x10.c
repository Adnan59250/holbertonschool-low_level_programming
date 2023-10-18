#include "main.h"

/**
 * print_alphabet_x10 - write a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int ligne = 0;

	while (ligne < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}

		ligne++;
		_putchar('\n');
	}

}
