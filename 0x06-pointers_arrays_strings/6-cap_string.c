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
 * cap_string - capitalizes the next letter that comes after a delimeter
 * @str: given string
 *
 * Return: str
 */

void *cap_string(char *str)
{
	char delim_arr[] = {' ', '\n', '\t'  '.', '!', '?', '"', '(', ')', '{', '}'};
	size_t delim_size = sizeof(delim_arr) / sizeof(char), k = 0;

	while (k < delim_size)
	{
		char *temp = str;

		while (*(temp + 1))
		{
			if (*temp = delim_arr[k])
			{
			*(temp + 1) = to_upper(*temp + 1);
			}
			temp++;
		}
		k++;
	}
}
			

