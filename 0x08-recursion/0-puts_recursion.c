#include "main.h"

/**
 * _puts_recursion - fundtion that primts esch character im string by
 * recursion
 * @s: pointer to the string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);

}
