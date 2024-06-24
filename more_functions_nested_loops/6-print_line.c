#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: the input
 *
 * Return: the straight line
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n; i++)
			putchar('_');
	}
	_putchar('\n');
}
