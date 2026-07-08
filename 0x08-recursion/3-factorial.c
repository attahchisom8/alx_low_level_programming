#include "main.h"

/**
 * factorial - function that calculates factorial by recursion
 * @n: the givven number whose factorial we seek
 *
 * Return: Resuult of the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
