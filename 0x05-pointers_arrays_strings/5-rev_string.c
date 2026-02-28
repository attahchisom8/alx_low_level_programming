#include "main.h"

/**
 * rev_string - reverses a string
 * @s: strimg to revwrse
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *start = s, *end, temp;
	int len = 0;

	while (s[len] != '\0')
		len++;

	end = s + len - 1;
	while (start <= end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
