#include "main.h"

/**
 * prime_helper - function that constrains or provide mobility to a variable
 * @n: constrained variable as constant
 * @y: mobile variable
 *
 * Return: natural sqrt of n or -1
 */

int prime_helper(int n, int y)
{
	if (n < 2)
		return (0);

	if (y < 2)
		return (1);

	if (n % y == 0)
		return (0);

	return (prime_helper(n, y - 1));
}


/**
 * is_prime_number - function that if a given imteger is a prime number
 * @n: the given number
 *
 * Return: 1 if its a prime number else 0
 */

int is_prime_number(int n)
{
	return (prime_helper(n, n - 1));
}
