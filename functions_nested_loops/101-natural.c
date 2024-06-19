#include <stdlib.h>
#include <stdio.h>

/**
 * main -  a program that computes and prints the sum
 * of all the multiples of 3 or 5 below 1024 (excluded)
 * Return: The addition of all the multiples
*/

void main(void)
{
	int i;
	unsigned long result = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%ul\n", result);
}
