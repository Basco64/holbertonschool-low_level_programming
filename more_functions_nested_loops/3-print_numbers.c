#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_numbers - Prints the alphabet in lowercase
 *
 * Return: The numbers from '0' to '9'
*/

void print_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
}
