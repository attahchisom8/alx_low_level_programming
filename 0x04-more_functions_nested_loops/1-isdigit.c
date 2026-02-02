#include "main.h"

/**
 * _isdigit - function to check if a given byte is a digit
 * @c: the given byte
 *
 * Return: 1 if its a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		if (c == k)
			return (1);
	}

	return (0);
}
