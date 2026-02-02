#include "main.h"

/**
 * print_line - function tgat prints a line using underscore
 * @n: how mamy underscore to print in the line
 *
 * Return: void
 */

void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (k = 1; k <= n; k++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
