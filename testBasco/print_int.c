#include "main.h"

/**
 * print_int - Print the numbers
 *
 * @args: The arguments
 *
 * Return: Void
 */

void print_int(va_list args)
{
	int num = va_arg(args, int);
	int rev = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
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
