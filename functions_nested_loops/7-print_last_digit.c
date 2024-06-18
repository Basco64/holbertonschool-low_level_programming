#include "main.h"

/**
 * print_last_digit - function fo print the last digit of a number
 *
 * @num: the input
 *
 * Return: the last digit of the input
*/

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		last_digit *= -1;
		last_digit = last_digit % 10;
	}
	else
		last_digit = last_digit % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
