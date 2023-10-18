#include "main.h"

/**
 * times_table - Write a function that prints
 * the 9 times table, starting with 0.
 * Return: O
 */

void times_table(void)
{
	int num, table, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (table = 1; table <= 9; table++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * table;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
