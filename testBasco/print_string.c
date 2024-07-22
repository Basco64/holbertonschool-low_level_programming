#include "main.h"

/**
 * print_string - Print the string
 *
 * @args: The arguments
 *
 * Return: Void
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	while (*str)
		_putchar(*str++);
}
