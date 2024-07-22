#include "main.h"
#include <stdio.h>

specifierType specifiers[] = {
	{'d', print_int},
	{'u', print_int},
	{'i', print_int},
	{'c', print_char},
	{'s', print_string},
	{'%', print_char},
	{'\0', NULL}
};

/**
 * _putchar - Print the char
 *
 * @c: The char
 *
 * Return: Void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - Print the numbers
 *
 * @args: The arguments
 *
 * Return: Void
 */

void print_int(va_list args, char *str, int *index)
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

/**
 * print_char - Print the char
 *
 * @args: The arguments
 *
 * Return: Void
 */

void print_char(va_list args, char *str, int *index)
{
	_putchar(va_arg(args, int));
}
