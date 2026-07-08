#include "main.h"

/**
 * _strlen_recursion - function to get the length of s
 * string by recursion
 * @str: pointer to the given string
 *
 * Return: length of the given string
 */

unsigned int _strlen_recursion(char *str)
{
	if (!*str)
		return (0);

	return (1 + _strlen_recursion(str + 1));

}

/**
 * recursion_helper - function that help liit the changing constraint
 * to only desired variables
 * @s: Variable we dont want to change
 * @len: variable we wanft to change
 *
 * Return: vvoid
 */

void recursion_helper(char *s, unsigned int len)
{
	if (len == 0)
		return;

	_putchar(*(s + len - 1));
	recursion_helper(s, len - 1);
}

/**
 * _print_rev_recursion - function that prints a string in reverse
 * by way of recursion
 * @s: pointer to the string to print
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	unsigned int len = _strlen_recursion(s);

	recursion_helper(s, len);
}
