#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer
 *
 * @array: The array where we search
 * @size: The number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which the
 * cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
