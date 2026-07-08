#include "main.h"

/**
 * _strlen_recursion - function to get the length of s
 * string by recursion
 * @s: pointer to the given string
 *
 * Return: length of the given string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(s + 1));

}
