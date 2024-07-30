#include "main.h"

/**
 * get_bit - Function that returns the value
 * of a bit at a given index
 *
 * @n: The number
 * @index: The index
 *
 * Return: The value of the bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(n) * 8 - 1;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);

}
