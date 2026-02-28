#include "main.h"

/**
 * _strlen - funxtion to get the length of q string
 * @s: Thw given string
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
