#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings
 *
 * @separator: The string to be printed between the strings
 * @n: Number of string
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(args);
}
