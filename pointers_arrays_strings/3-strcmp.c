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
	int i, cut, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len1 > len2)
		cut = len2;
	else if (len2 > len1)
		cut = len1;
	else
		cut = len1;

	for (i = 0; i < cut; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}

	return (s1[i] - s2[i]);
}
