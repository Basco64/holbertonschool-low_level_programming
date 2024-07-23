#include "main.h"

/**
 * print_string - Print the string
 *
 * @args: The arguments
 * @count: The counter
 *
 * Return: Void
 */

void print_string(va_list args, int *count)
{
	char *str = va_arg(args, char*);

	while (*str)
	{
		_putchar(*str++);
		*count += 1;
	}
}
