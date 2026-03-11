#include "main.h"

/**
 * is_alpha - checks if a character is an alphabet
 * @c: The given character
 * 
 * Return: 1 if true else 0
 */

 int is_alpha(int c)
 {
	int k;

	for (k = 65; k <= 90; k++)
	{
		if (c == k)
		return (1);
	}

	for (k = 97; k <= 122; k++)
	{
		if (k == c)
		return (1);
	}

	return (0);
 }

/**
 * rot13 - rotate an alnetic character inn a circe of the
 * next 13 characters
 * @str: string to rotate
 * 
 * Return: The modified string
 */

 char *rot13(char *str)
 {
	char *temp = str;

	while (*temp)
	{
		if (is_alpha(*temp))
		{
			int val;

			// val = *temp;
			val = (*temp + 13) % 26;
			*temp = val + '0';
		}
		temp++;
	}

	return (str);
 }