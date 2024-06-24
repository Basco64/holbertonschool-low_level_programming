#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _isdigit - checks for digit
 *
 * @c: the input
 *
 * Return: 1 if 'c' is digit, if not return 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
