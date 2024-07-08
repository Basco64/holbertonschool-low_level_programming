#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: a character
 *
 * Return: Pointer to the new array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
