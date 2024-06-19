#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	int count = 3;
	long long int first = 1, second = 2;
	unsigned long long int next = first + second;

	printf("%llu, %llu, ", first, second);
	while (count <= 98)
	{
		if (count == 98)
			printf("%llu\n", next);
		else
			printf("%llu, ", next);

		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}
