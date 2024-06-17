#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - A program that prints all possible
 *combinations of single-digit numbers
 *Return: All single digit
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		} else
			putchar('\n');
	}
	return (0);
}
