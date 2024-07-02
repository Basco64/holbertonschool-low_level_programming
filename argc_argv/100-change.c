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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}


}
