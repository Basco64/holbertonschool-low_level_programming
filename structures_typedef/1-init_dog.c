#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Function that initialize a variable of type struct dog
 *
 * @d: Pointer to the new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: Nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
