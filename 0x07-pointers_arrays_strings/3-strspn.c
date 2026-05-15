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
 * _strspn - unction that returns the nmber of bytes in the
 * initial segment of the main string consisting entirely of bytes from
 * the  test string
 * @s: the main string
 * @accept: The test string
 *
 * Return: number of bytes in the initial segment of s consisting entirely
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *main = s;

	while (*main)
	{
		if (_strchr(accept, *main))
		{
			count++;
			main++;
		}
		else
			break;
	}

	return (count);
}
