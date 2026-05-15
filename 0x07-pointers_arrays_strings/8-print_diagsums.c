#include "main.h"

/**
 * print_diagsums - print the sum of the left and right diagonal
 * of a suare
 * @a: a pointer to an array
 * @size: size of the arrray
 *
 * Return: void
 */


void print_diagsums(int *a, int size)
{
	int row = size * size - 1;
	int k, sum_left_diag = 0, sum_right_diag = 0;

	for (k = 0; k < size; k++)
	{int left_diag_idx = size * k + k;
		int right_diag_idx = row - (size - 1) * (k + 1);

		sum_left_diag += a[left_diag_idx];
		sum_right_diag += a[right_diag_idx];
	}

	printf("%d %d\n", sum_left_diag, sum_right_diag);
}
