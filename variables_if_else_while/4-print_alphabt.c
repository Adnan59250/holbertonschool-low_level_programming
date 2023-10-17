#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * followed by a new line
 * print all the letters except q and e
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{

	if (alphabet != 'q' &&  alphabet != 'e')
	putchar(alphabet);

	}

	putchar('\n');
	return (0);
}
