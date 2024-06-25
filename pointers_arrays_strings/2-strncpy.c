#include "main.h"

/**
 * _strncpy - Copy 'src' on 'dest', limit 'n' char
 *
 * @dest: The destination string
 * @src: The source string
 * @n: char allowed
 *
 *Return: The copy string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
