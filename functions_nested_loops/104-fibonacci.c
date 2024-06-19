#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	unsigned long int next = first + second;

	printf("%lu, %lu, ", first, second);
	while (count <= 98)
	{
		if (count == 98)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);

		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}
