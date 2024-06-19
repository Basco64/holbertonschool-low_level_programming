#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that prints the pairs Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	long int result = 0, first = 1, second = 2;
	long int next = first + second;

	while (next < 4000001)
	{
		if (next % 2 == 0)
			result += next;

		first = second;
		second = next;
		next = first + second;
	}
	printf("%lu\n", result + second);
	return (0);
}
