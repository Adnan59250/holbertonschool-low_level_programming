#include "main.h"

/**
 * rev_string -  function that returns reverse a string.
 * @s: string
 */

void rev_string(char *s)
{
	int lenght = 0;
	char *start = s;
	char *end = s;
	char tmp;

	while (*start != '\0')
	{
		lenght++;
		start++;
	}
	start--;

	while (end < start)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		end++;
		start--;
	}
}
