#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the program
 *
 * @argc: Number of argument in 'argv'
 * @argv: Array of argument
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		fprintf(stderr, "Error");
		exit(EXIT_FAILURE);
	}

	printf("%s\n", argv[0]);

	return (0);
}
