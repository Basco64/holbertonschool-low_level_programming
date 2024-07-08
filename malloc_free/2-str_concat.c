#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - Function that concatenates two strings
 *
 * @s1: The start string
 * @s2: The end string
 *
 * Return: Pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, lenT, i;
	char *newStr;

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	lenT = len1 + len2;

	newStr = malloc((lenT + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newStr[i] = s1[i];

	for (; i < lenT; i++)
		newStr[i] = s2[i - len1];

	newStr[i] = '\0';

	return (newStr);
}
