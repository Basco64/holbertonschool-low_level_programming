
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
	int u, d;

	if (n < 0)
		_putchar('-');

	d = 100000;

	while (d > 0)
	{
		if (d <= u || d == 1)
			_putchar(u / d % 10 + '0');
		d /= 10;
	}
}
