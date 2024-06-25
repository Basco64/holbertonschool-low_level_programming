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

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
}
