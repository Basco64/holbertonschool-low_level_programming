#include "main.h"

/**
 * _strncat - Appends the src string to the dest string
 *
 * @dest: The destination string
 * @src: The source string
 * @n: Bytes use from 'src'
 *
 *Return: The concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i, cut;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	if (len2 > n)
		cut = n;
	else
		cut = len2;

	for (i = 0; i < cut; i++)
		dest[len1 + i] = src[i];
	dest[len1 + cut] = '\0';

	return (dest);
}
