#include "main.h"

/**
 * print_square - function to print a dquare
 * @size: The size of the dquare
 *
 * Return: void
 */

void print_square(size)
{
	int k, p;

	for (k = 0; k < size; k++)
	{
		for (p = 0; p < size; p++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
