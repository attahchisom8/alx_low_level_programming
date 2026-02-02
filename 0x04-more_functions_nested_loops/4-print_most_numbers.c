#include "main.h"

/**
 * print_most_numbers - function to print number from 0 to 9 skipping 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		if (k == 50 || k == 52)
			k++;
		_putchar(k);
	}
	_putchar('\n');
}
