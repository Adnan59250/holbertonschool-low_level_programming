#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 57; x++)
	{
		putchar(x);
	}
	if (x != 57)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

