#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: the size of the square
 *
 * Return: The square
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	_putchar('\n');
}
