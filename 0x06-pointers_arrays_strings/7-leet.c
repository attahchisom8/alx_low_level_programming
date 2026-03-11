#include "main.h"

/**
 * leet - inction that encodes certain letters in a sting
 * to numbers
 * @s: the given string
 *
 * Return: The modified string
 */

char *leet(char *s)
{
	char letter_arr[] = {'a', 'e', 'o', 't', 'l'};
	int num_arr[] = {4, 3, 0, 7, 1};
	int k = 0;
	size_t size = sizeof(num_arr) / sizeof(int), p;

	while (s[k] != '\0')
	{
		for (p = 0; p < size; p++)
		{
			if ((s[k] == letter_arr[p]) || (s[k] == (int)letter_arr[p] - 32))
				s[k] = num_arr[p] + '0';
		}
		k++;
	}

	return (s);
}
