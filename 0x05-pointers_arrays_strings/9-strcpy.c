#include "main.h"


/**
 * _strcpy - function that copies the data pointed to by src to a buffer dest
 * @src: source string
 * @dest: The buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
