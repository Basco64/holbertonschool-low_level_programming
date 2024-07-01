#include "main.h"

/**
 * is_prime_test - Function to test if number is prime
 *
 * @n: The number
 * @div: The divisor
 *
 * Return: 1 or 0
*/

int is_prime_test(int n, int div)
{
	if ((n % div) == 0 && div < n)
		return (0);

	if (n == div)
		return (1);
	else
		return (is_prime_test(n, div + 1));
}

/**
 * is_prime_number - Function that returns 1 if the
 * 	input integer is a prime number
 *
 * @n: The number
 *
 * Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (is_prime_test(n, 4));
}
