#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 *
 * @b: bytes
 *
 * Return: exit(98) if fails, or adress to b
 */

void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);

	if (check == NULL)
		exit(98);

	return (check);
}
