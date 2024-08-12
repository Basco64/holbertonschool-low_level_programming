#include "main.h"

/**
 * print_octal - Print an integer in unsigned octal notation
 * (not preceded by a 0)
 *
 * @args: The argument
 * @count: The counter
 *
 * Return: Void
 */

void print_octal(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int divisor = 1, octal;

	if (num == 0)
	{
		_putchar('0');
		*count += 1;
		return;
	}

	while (num / divisor >= 8)
		divisor *= 8;

	while (divisor > 0)
	{
		octal = (num / divisor) % 8;
		_putchar(octal + '0');
		*count += 1;
		divisor /= 8;

	}
}
