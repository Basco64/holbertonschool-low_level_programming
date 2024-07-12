#include "main.h"
#include <stdio.h>

specifierType specifiers[] = {
	{'d', print_int},
	{'c', print_char},
	{'s', print_string},
	{'\0', NULL}
};

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
		putchar('0');
		return;
	}

	if (num < 0)
	{
		putchar('-');
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
		putchar((rev % 10) + '0');
		rev /= 10;
		count--;
	}

	while (count > 0)
	{
		putchar('0');
		count--;
	}
}

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
		putchar(*str++);
}

/**
 * print_char - Print the char
 *
 * @args: The arguments
 *
 * Return: Void
 */

void print_char(va_list args)
{
	int c = va_arg(args, int);

	putchar(c);
}
