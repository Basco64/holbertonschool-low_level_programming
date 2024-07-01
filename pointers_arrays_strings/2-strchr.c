#include "main.h"

/**
 * strchr - Function that locates a character in a string
 *
 * @s: The string
 * @c: The character
 *
 * Return: A pointer to the character or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (c == '\0')
		return (s + i);

	return (NULL);
}
