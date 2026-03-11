#include "main.h"


/**
 * _strncpy - cooies at most n bytes from src to the buffer pointed to by dest
 * @src: source string
 * @dest: buffer to recieve bytes from src
 * @n: Number of bytes to copy to buffer
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0, k = 0;
	char *temp_src = src;

	while (*temp_src)
	{
		len_src++;
		temp_src++;
	}

	if (n > len_src)
		n = len_src;

	temp_src = src;
	while (k < n)
	{
		*(dest + k) = *temp_src;
		temp_src++;
		k++;
	}
	*(dest + len_src) = '\0';

	return (dest);
}
