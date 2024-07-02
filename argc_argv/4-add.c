#include <stdlib.h>
#include <stdio.h>

/**
 * main -
 *
 * @argc: Number of argument in 'argv'
 * @argv: Array of argument
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i, result = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' && *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		} else
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
