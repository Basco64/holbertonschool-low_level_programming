#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *_isupper - Prints the alphabet in lowercase
 *
 * @c: the input
 *
 * Return: 1 if 'c' is uppercase or 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
