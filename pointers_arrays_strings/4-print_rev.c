#include "main.h"

/**
 * _print_rev - Return the reverse string
 *
 * @s: pointer of a string
 *
 * Return: The reverse string
*/

void print_rev(char *s)
{
	int len, i;

	while (s[len] != '\0')
		len ++;

	for (i = len; i <= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}
