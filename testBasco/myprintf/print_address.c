#include "main.h"

/**
 * print_address - Print the adress
 *
 * @args: The argument
 * @count: The counter
 *
 * Return: Void
 */

void print_address(va_list args, int *count)
{
	void *addr = va_arg(args, void*);
	unsigned long address = (unsigned long)addr;
	unsigned long int divisor = 1, hexa;

	if (address == 0)
	{
		_putchar('0');
		*count += 1;
		return;
	}

	while (address / divisor >= 16)
		divisor *= 16;


	_putchar('0');
	_putchar('x');
	 *count += 2;

	while (divisor > 0)
	{
		hexa = (address / divisor) % 16;

		if (hexa < 10)
			_putchar(hexa + '0');
		else
			_putchar(hexa - 10 + 'a');

		*count += 1;
		address %= divisor;
		divisor /= 16;
	}
}
