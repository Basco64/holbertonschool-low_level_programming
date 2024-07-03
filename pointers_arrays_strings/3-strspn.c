#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 *
 * @s: The string
 * @accept: The accepted byte
 *
 * Return: the number of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
		}
		if (found == 0)
			break;
	}
	return (count);
}
