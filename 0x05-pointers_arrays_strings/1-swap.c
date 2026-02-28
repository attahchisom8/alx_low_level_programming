#include "main.h"


/**
 * swap_int - swap the values of between two integers
 * @a: pointer to the first integer
 * @b: pointer to te second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
