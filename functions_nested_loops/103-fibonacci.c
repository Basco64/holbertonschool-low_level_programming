#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that prints the pairs Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	/* result = 2 for count second in the loop*/
	long int result = 2, first = 1, second = 2;
	long int next = first + second;

	while (next < 4000001)
	{
		if (next % 2 == 0)
			result += next;

		first = second;
		second = next;
		next = first + second;
	}
	printf("%lu\n", result);
	return (0);
}
