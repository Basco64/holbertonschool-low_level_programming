#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * argstostr - Function that concatenates all the arguments of your program
 *
 * @ac: Number of argument in 'av'
 * @av: Arguments Values (Array of String)
 *
 * Return: A pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, k = 0, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}
	arg = malloc((length + 1) * sizeof(char));

	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[k] = av[i][j];
			k++;
		}
		arg[k] = '\n';
		k++;

	}
	arg[k] = '\0';
	return (arg);
}
