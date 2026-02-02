#include "main.h"

/**
 * print_diagonal - function tgat prints a line using underscore
 * @n: how mamy underscore to print in the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int k, p;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (k = 1; k <= n; k++)
	{
		for (p = 1; p < k; p++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
