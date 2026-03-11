#include "main.h"

/**
 * to_upper - function that takes a char and if its lower case its made
 * upper case
 * @c: The given character
 *
 * Return: void
 */

int to_upper(int c)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		if (c == k)
			return (c -= 32);
	}
	return (c);
}


/**
 * string_toupper - changes all lower case charactwr in a steing to uppercase
 * @str: The given string
 *
 * Return: void
 */

char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp)
	{
		*temp = to_upper(*temp);
		temp++;
	}

	return (str);
}
