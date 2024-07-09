#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes of s2 to concat
 *
 * Return: A pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0, len2 = 0;
	char *newStr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		n = len2;

	newStr = malloc(len + n + 1);

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		newStr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		newStr[i] = s2[j];
		i++;
	}

	return (newStr);
		
}
