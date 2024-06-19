#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that prints the first 50 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	int count = 3;
	long int first = 1, second = 2;
	long int next = first + second;

	while (count <= 50)
	{
		if (count == 50)
			printf("%lu \n", next);
		else
			printf("%lu, ", next);

		first = second;
		second = next;
		next = first + second;
	}
	return (0);
}
