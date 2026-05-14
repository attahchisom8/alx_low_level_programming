#include "main.h"


/**
 * _memcpy - function that copies at most n number of byte
 * from one memory area to another
 * @src: he souurce memory area
 * @dest: The destination memory area
 * @n: number of bytes to write to dest from src
 *
 * Return: pointer to the destination memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
