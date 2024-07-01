#include "main.h"

/**
 * _memcpy - Function that copies memory area
 *
 * @dest: destination memory
 * @src: source memory
 * @n: Bytes to copy
 *
 * Return: Pointer to destination memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
