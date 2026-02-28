#include "main.h"

/**
 * print_rev - function that prints string in reverse order followed by a new line
 * @s: The given string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, p;

	while (s[len] != '\0')
		len++;

	p = len - 1;
	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
