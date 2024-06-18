#include <unistd.h>

/**
 * main - C program that prints exactly
 * `and that piece of art is useful" - Dora Korpar, 2015-10-19`
 * , followed by a new line, to the standard error.
 *
 * Return: The print
*/

int main(void)
{
	write(stderr,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n" 59);
	return (1);
}
