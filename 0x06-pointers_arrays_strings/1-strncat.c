#include "main.h"


/**
 * _strncat - this function adjoins at nost n nyts of the  the sting pointed
 * to by src to to the end of dest then apends a null byte
 * @src: source sting
 * @dest: string to recieve src
 * @n: Number of bytes to copy from src
 *
 * Return: pointer to the dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0, k;

	while (dest[len_dest] != '\0')
		len_dest++;

	while (src[len_src] != '\0')
		len_src++;

	if (n > len_src)
		n = len_src;

	k = 0;
	while (k < n)
	{
		dest[len_dest] = src[k];
		k++;
		len_dest++;
	}
	dest[len_dest] = '\0';

	return (dest);
}
