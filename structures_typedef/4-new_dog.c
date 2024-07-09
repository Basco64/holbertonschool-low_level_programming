#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 *
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Return: The new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, lenName = 0, lenOwn = 0;

	while (name[lenName] != '\0')
		lenName++;

	while (owner[lenOwn] != '\0')
		lenOwn++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenName + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (lenOwn + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	for (i = 0; i < lenName; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	for (i = 0; i < lenOwn; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	dog->age = age;

	return (dog);
}
