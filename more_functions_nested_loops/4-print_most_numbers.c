#include "main.h"

/**
 * print_most_numbers - Prints 0 1 3 5 6 7 8 9
 *
 * Return: The good numbers
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
