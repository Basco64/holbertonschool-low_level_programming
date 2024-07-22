#include "main.h"

/**
 * _putchar - Print the char
 *
 * @c: The char
 *
 * Return: Void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
