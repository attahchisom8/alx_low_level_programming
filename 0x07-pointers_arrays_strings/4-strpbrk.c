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


/**
 * _strpbrk - function locates the ﬁrst occurrence in the string s of any
 * of the bytes in the string accept
 * it is as strchr but instead of searching for a single character in s
 * we search for the first occurrence of any set of bytes in accept
 * @s: the given string
 * @accept: The set of bytes serving as a search criteria
 *
 * Return: pointer to the first occurence of the byte if found
 */

char *_strpbrk(char *s, char *accept)
{
	char *main = s;

	while (*main)
	{
		if (_strchr(accept, *main))
			return (main);
		main++;
	}

	return (NULL);
}
