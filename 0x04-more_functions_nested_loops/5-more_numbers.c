#include "main.h"

/**
 * more_numbers - function to print number from 0 to 14 10x
 *
 * Return: void
 */

void more_numbers(void)
{
	int k, p = 0;

	while (p < 10)
	{
		for (k = 48; k <= 57; k++)
		{
			_putchar(k);
		}
		for (k = 0; k <= 4; k++)
		{
			_putchar(49);
			_putchar(k + '0');
		}
		p++;
		_putchar('\n');
	}
}
