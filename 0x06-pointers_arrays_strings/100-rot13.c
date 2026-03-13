#include "main.h"

/**
 * rot13 - rotate an alnetic character inn a circe of the
 * next 13 characters
 * @str: string to rotate
 *
 * Return: The modified string
 */

char *rot13(char *str)
{
	char *curr_char = str;
	char small_letter_arr[26] = {
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z'
	};
	char big_letter_arr[26] = {
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z'
	};
	int k, idx;

	while (*curr_char)
	{
		for (k = 0; k < 26; k++)
		{
			if (small_letter_arr[k] == *curr_char || big_letter_arr[k] == *curr_char)
			{
				char small, big;

				idx = (k + 13) % 26;
				small = (small_letter_arr[k] == *curr_char) * small_letter_arr[idx];
				big = (big_letter_arr[k] == *curr_char) * big_letter_arr[idx];
				*curr_char = small + big;
				break;
			}
		}
		curr_char++;
	}

	return (str);
}
