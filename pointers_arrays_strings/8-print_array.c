#include "main.h"
#include <stdio.h>

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

	if (n < 0)
	{
		printf("%d\n", a[0]);
		return;
	}

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
