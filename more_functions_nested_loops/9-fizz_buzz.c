#include <stdio.h>

/**
 * main - FizzBuzz test
 * Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
