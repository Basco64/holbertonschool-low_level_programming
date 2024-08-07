#include "main.h"

/**
 * binary_to_uint - Function that converts a binary
 * number to an unsigned int
 *
 * @b: Pointer to a string
 *
 * Return: The converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		res = res << 1;

		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			res = res | 1;
	}

	return (res);
}
