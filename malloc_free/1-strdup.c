#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter
 *
 * @str: The source string
 *
 * Return: Pointer to the new allocated memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *newStr;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	newStr = malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
	{
		newStr[i] = str[i];
	}
	newStr[i] = '\0';

	return (newStr);
}
