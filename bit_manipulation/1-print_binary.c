#include "main.h"

/**
 * print_binary - Function that prints the binary
 * representation of a number
 *
 * @n: The number
 *
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
	long int size;
	char bit;
	int skip_zero;

	size = sizeof(n) * 8 - 1;

	skip_zero = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (size >= 0)
	{
		bit = (n >> size) & 1;

		if (skip_zero == 1)
			_putchar(bit + '0');
		else
		{
			if (bit == 1)
			{
				_putchar(bit + '0');
				skip_zero = 1;
			}
		}

		size -= 1;
	}
}
