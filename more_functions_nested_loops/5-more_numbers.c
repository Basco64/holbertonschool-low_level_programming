#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: The display
*/

void more_numbers(void)
{
	int i,num,ten,digit;

	for (i = 0; i < 10; i++)
	{
		for (num = 0 ; num < 15; num++)
		{
			if (num > 9)
			{
				ten = num / 10;
				digit = num % 10;
				_putchar(ten + '0');
			}else
				digit = num;

			_putchar(digit + '0');
		}
		_putchar('\n');
	}
}
