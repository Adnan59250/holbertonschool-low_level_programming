#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - if number is > 0 is positive
* or if number < 0 neagtive
* otherwise 0
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
