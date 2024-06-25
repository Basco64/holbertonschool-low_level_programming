#include "main.h"

/**
 * rev_string - Return the reverse string
 *
 * @s: pointer of a string
 *
 * Return: The reverse string
*/

void rev_string(char *s)
{
	int len = 0, i;
	char tmp;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
