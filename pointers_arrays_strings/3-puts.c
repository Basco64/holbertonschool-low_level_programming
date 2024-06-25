#include "main.h"

/**
 * _puts - Print a string
 *
 * @str: pointer of a string
 *
 * Return: The string
*/

void _puts(char *str)
{
        int i;

	for (i = 0; i <= _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
