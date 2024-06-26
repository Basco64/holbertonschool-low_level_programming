#include "main.h"

/**
 * print_number - Print an integer
 *
 * @n: The integer input
 *
 * Return: Nada
*/

void print_number(int n)
{
	unsigned int u, d = 1000000000;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			u = n * -1;
		} else
			u = n;

		while (d != 0)
		{
			if (d <= u || d == 1)
				_putchar(u / d % 10 + '0');
			d /= 10;
		}

	}
}
