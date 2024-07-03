#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the
 * two diagonals of a square matrix of integer
 *
 * @a: Pointer to the first element of the array
 * @size: The size of the matrice
 *
 * Return: The sum of the diagonal
 */

void print_diagsums(int *a, int size)
{
	long int cross1 = 0, cross2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		cross1 += a[(size * i) + i];
		cross2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%ld, %ld\n", cross1, cross2);
}
