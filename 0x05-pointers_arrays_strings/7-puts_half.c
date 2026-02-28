#include "main.h"


/**
 * puts_half - prints half a string to sdout with a trailing newline
 *
 * @str: The given string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	len = len / 2;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
