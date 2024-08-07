#include "main.h"

/**
 * set_bit - Function that sets the value of a
 * bit to 1 at a given index
 *
 * @n: The pointer to the number
 * @index: The index
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int mask;

	size = sizeof(*n) * 8 - 1;

	if (index > size)
		return (-1);

	mask = 1 << index;

	*n = mask | *n;

	return (1);

}
