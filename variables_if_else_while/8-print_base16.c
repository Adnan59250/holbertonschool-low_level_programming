#include <stdio.h>

/**
 * main - Write a program that prints
 * all the numbers of base 16 in lowercase
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		printf("%x", num);
	}
	printf("\n");
	return (0);
}
