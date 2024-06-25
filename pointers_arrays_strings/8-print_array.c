#include "main.h"

/**
 * print_array - Print an array
 *
 * @a: The array
 * @n: the length of the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != n)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i];
	}
	_putchar('\n');
}
