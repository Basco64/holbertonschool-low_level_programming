#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of
 * coins to make change for an amount of money
 *
 * @argc: Number of argument in 'argv'
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	for (coins = 0; cents > 0; coins++)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10 && cents < 25)
			cents -= 10;
		else if (cents >= 5 && cents < 10)
			cents -= 5;
		else if (cents >= 2 && cents < 5)
			cents -= 2;
		else
			cents -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
