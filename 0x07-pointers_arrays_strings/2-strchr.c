#include "main.h"

/**
 * _strchr - function that searches the first occurence of a character
 * in a string
 * @s: The given string
 * @c: The given character to search
 *
 * Return: pointer to the first occurence of the character
 */


char *_strchr(char *s, char c)
{
	char *found_chr = s;

	while (*found_chr)
	{
		if (c == *found_chr)
			return (found_chr);
		found_chr++;
	}

	return (NULL);
}
