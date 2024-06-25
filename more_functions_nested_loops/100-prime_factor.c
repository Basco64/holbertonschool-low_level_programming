#include <stdio.h>

/**
 * main - Program that finds and prints the largest prime factor of the number '612852475143'
 *
 * Return: the largest prime factor
 */

int main(void)
{
	long i, num;

	num = 612852475143;

	for (i = 3; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}

	printf("%lu\n", num);

	return (0);
}
