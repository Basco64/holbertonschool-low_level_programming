#include "main.h"

/**
 * _print_rev_recursion - Return the reverse string
 *
 * @s: pointer of a string
 *
 * Return: The reverse string
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
