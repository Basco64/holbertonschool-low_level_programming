#include "main.h"

/**
 * print_unsigned_int - Print the unsigned numbers
 *
 * @args: The arguments
 *
 * Return: Void
 */

void print_unsigned_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int rev = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (num != 0)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
		count++;
	}

	while (rev != 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
		count--;
	}

	while (count > 0)
	{
		_putchar('0');
		count--;
	}
}
