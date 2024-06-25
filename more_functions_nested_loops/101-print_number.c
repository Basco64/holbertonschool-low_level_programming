
#include "main.h"

/**
 * print_number -  Prints an integer
 *
 * @n: the integer
 *
 * Return: the integer
*/

void print_number(int n)
{
	unsigned int d, u;

	if (n < 0)
	{
		_putchar('-');
		u = n * -1;
	} else
		u = n;

	d = 10000000000;

	while (d > 0)
	{
		if (d <= u || d == 1)
			_putchar(u / d % 10 + '0');
		d /= 10;
	}
}
