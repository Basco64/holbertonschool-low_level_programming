#include "main.h"

/**
 * puts_half - Function that prints half of a string
 *
 * @str: the string input
 *
 * Return: the half of the string
*/

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	for (i = len / 2 ; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\0');
}
