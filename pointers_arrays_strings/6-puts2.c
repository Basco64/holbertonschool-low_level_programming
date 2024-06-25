#include "main.h"

/**
 * _puts2 - Function that prints every other character of a string, starting with the first character
 *
 * @str: pointer of a string
 *
 * Return: The string
*/

void _puts2(char *str)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
                	_putchar(str[i]);
        _putchar('\n');
}
