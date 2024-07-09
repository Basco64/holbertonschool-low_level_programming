#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 *
 * @d: Pointer to the dog to be freed
 *
 * Return: Nothing
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
