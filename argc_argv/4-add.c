#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive number in argument
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
