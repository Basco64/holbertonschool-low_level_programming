#include "main.h"
#include <stdio.h>

/**
 * print_int - Print the numbers
 *
 * @num : The number
 *
 * Return: Void
 */

void print_int(int num)
{
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
 * @str: The string
 *
 * Return: Void
 */

void print_string(const char *str)
{
	while (*str)
		putchar(*str++);
}
