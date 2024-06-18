#include <stdio.h>
#include <string.h>

/**
 * main - C program that prints exactly
 * `and that piece of art is useful" - Dora Korpar, 2015-10-19`
 * , followed by a new line, to the standard error.
 *
 * Return: The print
*/

int main ()
{
	unsigned long int i;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; i <= strlen(str); i++)
		putchar(str[i]);
	return (1);
}
