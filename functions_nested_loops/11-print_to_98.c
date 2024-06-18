#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 *
 * @n: The input
 *
 * Return: Request numbers
*/

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		printf("%d, ", i);
	_putchar('\n');

}
