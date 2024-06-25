#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: pointer of a string
 *
 * Return: The length of the string
*/

int _strlen(char *s)
{
	int inpLen = 0;

	while (s[inpLen] != '\0')
		inpLen++;

	return (inpLen);
}
