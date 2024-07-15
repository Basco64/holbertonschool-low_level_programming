#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: The array
 * @size: The size of the array
 * @action: Function that take an int argument
 *
 * Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
