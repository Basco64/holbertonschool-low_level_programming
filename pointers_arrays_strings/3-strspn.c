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
	unsigned int i, j, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
			found = 0;
		}
		if (found == 0)
			break;
	}
	return (count);
}
