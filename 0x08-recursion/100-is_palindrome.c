#include "main.h"

/**
 * palindrome_helper - helps parse a string from both sides
 * @start: pointer to the start of the steing
 * @end: pointer to the end of the string
 *
 * Return: 1 if its a pallindrome else 0
 */

int palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);

	if (*start != *end)
		return (0);

	return (palindrome_helper(start + 1, end - 1));
}

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

/**
 * is_palindrome - function to cneck if when a string is reversed it
 * reads the same like the original string
 * @s: pointer to the given string
 *
 * Return: 1 if the string is a pallindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *s_start, *s_end;

	if (len == 0)
		return (0);
	s_start = s, s_end = s + len - 1;

	return (palindrome_helper(s_start, s_end));
}
