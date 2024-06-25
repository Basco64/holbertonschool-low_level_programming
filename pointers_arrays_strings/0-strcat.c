#include "main.h"

/**
 * _strcat: Appends the src string to the dest string
 *
 * @dest: The destination string
 * @src: The source string
 *
 *Return: The concat string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0,len2 = 0, i;
	
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	
	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];
	dest[len1 + len2] = '\0';

	return dest;
}
