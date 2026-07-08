#include "main.h"

/**
 * _pow_recursion - function that multiplies a nuumber x to the power of y
 * @x: The base number
 * @y: the power factor or undex
 *
 * Return: the result of the operation or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
