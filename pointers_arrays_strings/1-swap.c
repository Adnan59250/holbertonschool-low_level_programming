#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: first int to be swapped
 * @b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
