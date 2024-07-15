#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 *
 * @name: The name to print
 * @f: Function who take a string in argument
 *
 * Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
