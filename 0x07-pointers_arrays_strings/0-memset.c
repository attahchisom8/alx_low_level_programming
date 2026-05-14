#include "main.h"


/**
 * _memset - function that writes at most n number of byte
 * to a memory location
 * @s: the memory location to write to - the buffer
 * @b: the givrn byte to write to memory
 * @n: number of time to write the byte  to buffer
 *
 * Return: pointer to the buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		s[k] = b;
		k++;
	}

	return (s);
}
