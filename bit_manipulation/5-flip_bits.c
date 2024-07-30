#include "main.h"

/**
 * flip_bits - Function that returns the number
 * of bits you would need to flip to get
 * from one number to another
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bit between the 2 parameters
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, size, i;

	size = sizeof(n) * 8 - 1;

	for (i = 0; i <= size; i++)
	{
		if ((n & 1) != (m & 1))
			flip++;

		n = n >> 1;
		m = m >> 1;
	}

	return (flip);

}
