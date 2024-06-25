#include "main.h"

/**
 * reverse_array - Rverses the content of an array of integers
 *
 * @a: An array
 * @n: Number of element in 'a'
 *
 *Return: The reverse Array
 */

void reverse_array(int *a, int n)
{
	int len = 0, i, tmp;

	while (a[len] != '\0')
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = tmp;
	}
}
