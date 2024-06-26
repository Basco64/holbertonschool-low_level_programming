#include "main.h"

/**
 * print_times_table -  that prints the n times table, starting with 0
 *
 * @n: the input
 *
 * Return: The times table
*/

void print_times_table(int n)
{
	int i, multiplier, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (multiplier = 0; multiplier <= n ; multiplier++)
		{
			result = i * multiplier;
			if (multiplier == 0)
				_putchar('0');
			else if (result < 10 && multiplier != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
