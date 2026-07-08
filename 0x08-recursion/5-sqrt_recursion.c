#include "main.h"

/**
 * sqrt_helper - function that constrains or provide mobility to a variable
 * @n: constrained variable
 * @y: mobile variable
 *
 * Return: natural sqrt of n or -1
 */

int sqrt_helper(int n, int y)
{
	if (y <= 0)
		return (-1);

	if (y * y == n)
		return (y);

	return (sqrt_helper(n, y - 1));
}


/**
 * _sqrt_recursion - function that returns thr natural sqrt of a number
 * @n: the given number
 *
 * Return: natural sqrt of a number or -1 if it doesnt have any
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, n));
}
