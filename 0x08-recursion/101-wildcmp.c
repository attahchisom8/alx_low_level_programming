#include "main.h"

/**
 * wildcmp - function that compares if two strings are identical
 * wild character * can be expanded as letter b4 or after
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if its identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*s1 && wildcmp(s1 + 1, s2))
			return (1);
		return (wildcmp(s1, s2 + 1));
	}

	return (0);
}
