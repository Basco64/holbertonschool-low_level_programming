#include "main.h"

/**
 * print_diagonal - Print diagonal
 *
 * @n: the input
 *
 * Return: The diagonal
*/

void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i >= 1)
			{
				for (space = 0; space < i;space++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
