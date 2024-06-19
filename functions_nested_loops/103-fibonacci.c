#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that prints the pairs Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	long int first = 1, second = 2;
	long int next = first + second;

	while (next < 4000001)
	{
		if (next % 2 == 0)
			printf("%lu, ", next);

		first = second;
		second = next;
		next = first + second;
	}
	(second % 2 == 0) && printf("%lu\n", second);
	return (0);
}
