#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all arguments
 *
 * @argc: Number of argument in 'argv'
 * @argv: Array of argument
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
