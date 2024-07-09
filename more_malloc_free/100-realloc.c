#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _realloc - Function that reallocates a memory block
 *
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newPtr;


	if (ptr == NULL)
	{
		newPtr = malloc(new_size);

		if (newPtr == NULL)
			return (NULL);
		return (newPtr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	newPtr = malloc(new_size);

	if (newPtr == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			((char *)newPtr)[i] = ((char *)ptr)[i];
	} else
	{
		for (i = 0; i < old_size; i++)
			((char *)newPtr)[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (newPtr);
}
