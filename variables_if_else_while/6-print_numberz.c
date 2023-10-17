#include <stdio.h>

/**
 * main - Write a program that prints all single
 * digit numbers of base 10 starting from 0
 * followed by a new line.
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int number;

		for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
