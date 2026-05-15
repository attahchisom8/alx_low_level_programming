#include "main.h"

/**
 * print_chessboard - prints a chessboard of 8 colums
 * @a: The given chessboard
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	size_t row = 8;
	size_t k, p;

	for (k = 0; k < row; k++)
	{

		for (p = 0; p < 8; p++)
		{
			_putchar(a[k][p]);
		}
		_putchar('\n');
	}
}
