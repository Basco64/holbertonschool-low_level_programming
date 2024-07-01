#include "main.h"

/**
 * find_sqrt - Function for find the square root of a number
 * (just recursive part)
 *
 * @n: The number
 * @sqrt: Current number fot the square root
 *
 * Return: The square root
 */

int find_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	return (find_sqrt(n, sqrt + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * (init part)
 *
 * @n: The number
 *
 * Return: The square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	return (find_sqrt(n, 0));
}
