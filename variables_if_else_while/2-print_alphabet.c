#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * followed by a new line.
 * Retunr: 0
 */
int main(void)
{
	char  alphabet;
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{

	putchar(alphabet);

	}

	putchar('\n');

	return (0);
}
