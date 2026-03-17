#include "main.h"


/**
 * _strlen - get the length of a string
 * @s: The given string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * rev_str - function to reverse a string
 * @s: The given string
 *
 * Return: The reveresed string
 */

char *rev_str(char *s)
{
	int len = _strlen(s);
	char *start = s, *end = s + len - 1;

	while (start <= end)
	{
		char temp = *start;

		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	return (s);
}


/**
 * infinite_add - Adds any number of integers and store them in a buffer
 * @n1: lointer to first string of integeres
 * @n2: pointwr to wecond wtring of integers
 * @r: The given buffer
 * @size_r: buffer size_r
 *
 * Return: pointer to the reasult result r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int digit_1, digit_2, carry_over = 0, k, sum;
	int len1 = _strlen(n1), len2 = _strlen(n2), longest;

	if (len1 >= len2)
		longest = len1;
	else
		longest = len2;

	if (!r)
		return (0);

	for (k = 0; k < longest; k++)
	{
		if (len1 - 1 < 0)
			digit_1 = 0;
		else
			digit_1 = n1[len1 - 1] - '0';
		if (len2 - 1 < 0)
			digit_2 = 0;
		else
			digit_2 = n2[len2 - 1] - '0';
		sum = digit_1 + digit_2 + carry_over;
		carry_over = sum / 10;
		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
		len1--, len2--;
	}
	if (carry_over > 0)
	{
		if (k >= size_r - 1)
			return (0);
		r[k++] = carry_over + '0';
	}
	r[k] = '\0';

	rev_str(r);

	return (r);
}
