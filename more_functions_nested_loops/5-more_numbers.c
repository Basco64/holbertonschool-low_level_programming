#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: The display
*/

void more_numbers(void)
{
	int i,num;

	for (i = 0; i <= 10; i++)
	{
		for (num = 0 ; num < 15; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
