#include "main.h"


/**
 * _strcat - this function adjoins the sting pointed to by src
 * to to the end of dest then apends a null byte
 * @src: source sting
 * @dest: string to recieve src
 *
 * Return: pointer to the dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0, k;

	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;

	k = 0;
	while (k < len_src)
	{
		dest[len_dest] = src[k];
		k++;
		len_dest++;
	}
	dest[len_dest] = '\0';

	return (dest);
}
