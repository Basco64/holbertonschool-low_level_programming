#include <stdio.h>
#include <string.h>

/**
 * main - C program that prints exactly
 * `and that piece of art is useful" - Dora Korpar, 2015-10-19`
 * , followed by a new line, to the standard error.
 *
 * Return: The print
*/

int main(void)
{
	int i = 0, length = 0;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (str[length] != '\0')
	{
		length++;
	}
	length--;

	for (i; i <= length; i++)
		putchar(str[i]);
	return (1);
}
