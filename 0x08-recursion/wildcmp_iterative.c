#include "main.h"
#include <string.h>

/**
 * wildcmp - function that compares if two strings are identical
 * wild character * can be expanded as letter b4 or after
 * @s1: the first string
 * @s2: the second string
 * 
 * 	Return: 1 if its identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	char *s1_pos = NULL, *s2_pos = NULL;

	while (*s1)
	{
		while (*s1 && *s1 == *s2)
		{
			s1++;
			s2++;
		}


		if (*s2 == '*')
		{
			while (*s2 == '*')
				s2++;
			s2_pos = s2;
			s1_pos = s1;
		}
		else if (*s1 != *s2)
		{
			if (s2_pos)
			{
				s2 = s2_pos;
				s1_pos++;
				s1 = s1_pos;
			}
			else
			{
				return (0);
			}
		}
	}

	while (*s2 == '*')
		s2++;

	return (*s2 == '\0');
}
