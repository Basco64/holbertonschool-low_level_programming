#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 *
 * @n: The number of arguments
 *
 * Return: The result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;


	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0;  i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
