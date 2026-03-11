#include "main.h"


/**
 * reverse_array - reverses the content of an array
 * @a: pointer the array
 * @n: size lf the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int k, temp;

	for (k = 0; k < (n / 2); k++)
	{
		temp = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1 - k] = temp;

	}
}
