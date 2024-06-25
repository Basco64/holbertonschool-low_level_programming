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
	int i;
	int tmp[sizeof(a) / sizeof(int)];
	
	for (i = 0; i < (n / 2); i++)
	{
		tmp[i] = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp[i];
	}
}
