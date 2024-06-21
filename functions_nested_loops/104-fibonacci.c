#include <stdlib.h>
#include <stdio.h>

/**
 * main -  program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	unsigned long first_start = 1, first_end = 0;
	unsigned long second_start = 2, second_end = 0;
	unsigned long next_start = first_start + second_start, next_end = 0;
	unsigned long overflow = 1000000000;
	int count = 3;

	printf("%lu, %lu, ", first_start, second_start);
	while (count <= 98)
	{
		if (next_start >= overflow)
		{
			next_start -= overflow;
			next_end += 1;
		}
		if (count == 98)
			printf("%lu%09lu\n", next_end, next_start);
		else
		{
			if (next_end > 0)
				printf("%lu%09lu, ", next_end, next_start);
			else
				printf("%lu, ", next_start);
		}

		first_start = second_start;
		first_end = second_end;

		second_start = next_start;
		second_end = next_end;

		next_start = first_start + second_start;
		next_end = first_end + second_end;

		count++;
	}
	return (0);
}
