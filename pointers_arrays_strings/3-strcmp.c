#include "main.h"

/**
 * _strcmp - Compares two strings and determines whether
 * the first is less than, equal to or greater than the second.
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: the result of the difference
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int len1 = 0, len2 = 0;
	int cmpt1 = 0, cmpt2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	for (i = 0; i < len1; i++)
		cmpt1 += s1[i];
	for (i = 0; i < len2; i++)
		cmpt2 += s2[i];

	return (s1 - s2);
}
