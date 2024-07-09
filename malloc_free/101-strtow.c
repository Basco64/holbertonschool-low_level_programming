#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Function that splits a string into words
 *
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
*/

char **strtow(char *s)
{
	char **args;
	int i, j = 0, arguc = 0, length = 0, start = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			arguc++;
	}

	args = malloc((arguc + 1) * sizeof(char *));

	if (args == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (length == 0)
				start = i;
			length++;
		}
		else if (length > 0)
		{
			args[j] = malloc((length + 1) * sizeof(char));
			if (args[j] == NULL)
			{
				for (int k = 0; k < j; k++)
					free(args[k]);
				free(args);
				return (NULL);
			}

			for (int k = 0; k < length; k++)
				args[j][k] = str[start + k];
			args[j][length] = '\0';

			j++;
			length = 0;
		}
	}

	if (length > 0)
	{
		args[j] = malloc((length + 1) * sizeof(char));
		if (args[j] == NULL)
		{
			for (int k = 0; k < j; k++)
				free(args[k]);
			free(args);
			return (NULL);
		}

		for (int k = 0; k < length; k++)
			args[j][k] = str[start + k];
		args[j][length] = '\0';
	}

	 return (args);
}
