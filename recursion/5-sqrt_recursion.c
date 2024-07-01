#include "main.h"

int find_sqrt(int n, int sqrt) {
	if (sqrt * sqrt == n)
		return sqrt;
	if (sqrt * sqrt > n)
		return -1;
	return find_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 *
 * @n: The number
 *
 * Return: The square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return -1;
	
	return find_sqrt(n, 0);
}
