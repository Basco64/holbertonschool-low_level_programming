#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	/**
	 * This code is incomplete, problem:
	 * once you exceed the value of an unsigned long,
	 * the return is no longer correct. long long forbidden
	 */
	int count = 3;
	unsigned long first = 1, second = 2;
	unsigned long next = first + second;

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
