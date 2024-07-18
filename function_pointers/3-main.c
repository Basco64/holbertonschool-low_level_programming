#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - Main function
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	operator = get_op_func(argv[2]);
	b = atoi(argv[3]);

	if (operator == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator(a, b));

	return (0);
}
