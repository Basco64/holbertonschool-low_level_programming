#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet .. 10 times
 * Return: 10 alphabets
 */

void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
