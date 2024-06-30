#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 *
 * @s: pointer of memory area
 * @b: constant byte
 * @n: the number of bytes to fill
 *
 * Return: Pointer to the memory area 's'
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
