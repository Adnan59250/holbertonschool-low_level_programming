#include <stdio.h>

/**
 * main - Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 * You can only use the putchar function (every other function
 * Return: 0
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
