#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two number 
 *
 * @argc: Number of argument in 'argv'
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
