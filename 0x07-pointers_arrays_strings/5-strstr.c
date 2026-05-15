#include "main.h"

/**
 * _strstr -  function that locates the first occurence of a substring
 * in a string
 * @haystack: The given string
 * @needle: The substring we want to locate
 *
 * Return: pointer to the first occurence of the substring in the string
 * heystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *str = haystack;
		char *substr = needle;

		while (*str == *substr && *substr)
		{
			substr++;
			str++;
		}

		if (!*substr)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
