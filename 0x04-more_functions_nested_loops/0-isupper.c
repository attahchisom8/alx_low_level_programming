#include "main.h"

/**
 * _isupper - function to check if a charavter is an uppercase character
 * @c: The hiven character
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	int k;

	for (k = 65; k <= 90; k++)
	{
		if (c == k)
			return (1);
	}

	return (0);
}
