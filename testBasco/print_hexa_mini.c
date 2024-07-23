#include "main.h"

/**
 * print_hexa_mini - Print a number in lowercase hexadecimal
 *
 * @args: The argument
 * @count: The counter
 *
 * Return: Void
 */

void print_hexa_mini(va_list args, int *count)
{
	unsigned int entrie = va_arg(args, unsigned int);
	unsigned int divisor = 1, hexa;

	if (entrie == 0)
	{
		_putchar('0');
		*count += 1;
		return;
	}

	while (entrie / divisor >= 16)
		divisor *= 16;

	while (divisor > 0)
	{
		hexa = (entrie / divisor) % 16;

		if (hexa < 10)
			_putchar(hexa + '0');
		else
			_putchar(hexa - 10 + 'a');

		*count += 1;
		divisor /= 16;
	}
}
