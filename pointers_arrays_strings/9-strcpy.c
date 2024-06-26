#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by
 * 'src' to the buffer pointed by 'dest'
 *
 * @src: The source
 * @dest: The destination
 *
 * Return: The pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	dest[len + 1] = '\0';

	return (dest);
}
