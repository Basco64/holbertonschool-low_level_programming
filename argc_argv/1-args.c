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
	printf("%d\n", argc);
	argv[0] = "Useless";

	return (0);
}
