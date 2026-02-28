#include "main.h"


/**
 * print_array - prints n items of an array in the order in which they are stoted
 * @a: The given array
 * @n: size of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int k = 0;

	while (k < n)
	{
		printf("%d%s", a[k], (k < n -1) ? ", ": "\n");
		k++;
	}
}
