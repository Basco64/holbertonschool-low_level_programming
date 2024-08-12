#include "main.h"

/**
 * print_int - Print the numbers
 *
 * @args: The arguments
 * @count: The counter
 *
 * Return: Void
 */

void print_int(va_list args, int *count)
{
	int num = va_arg(args, int);
	int rev = 0, cmpt = 0;

	if (num == 0)
	{
		_putchar('0');
		*count += 1;
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		*count += 1;
		num = -num;
	}

	while (num != 0)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
		cmpt++;
	}

	while (rev != 0)
	{
		_putchar((rev % 10) + '0');
		*count += 1;
		rev /= 10;
		cmpt--;
	}

	while (cmpt > 0)
	{
		_putchar('0');
		*count += 1;
		cmpt--;
	}
}
