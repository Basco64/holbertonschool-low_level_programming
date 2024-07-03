#include "main.h"
#include <stddef.h>

/**
 * _strstr - Function finds the first occurrence of the substring
 * needle in the string haystack
 *
 * @haystack: The string
 * @needle: The substring
 *
 * Return: The pointer to the beginning of the located substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, lenSub = 0;

	if (*needle == '\0')
		return (NULL);

	while (needle[lenSub] != '\0')
		lenSub++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
		}
		if (j == lenSub)
			return (haystack + i);
	}
	return (NULL);
}
