#include "main.h"

/**
 * swap_int - Swap value of 2 integers
 *
 * @a: first integer
 * @b:second integer
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
