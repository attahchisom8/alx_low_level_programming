#include "main.h"


/**
 * _strcmp - fun tion that compares the equality of two atring by their ascii value
 * @s1: first string
 * @s2: second string
 *
 * Return: The dufference of inequality
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s1[k] == s2[k])
		k++;

	return (s1[k] - s2[k]);
}
