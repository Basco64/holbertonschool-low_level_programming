#include "main.h"

/**
 * _isalpha - Check if input is an alpha
 *
 * @c: the input to check
 *
 * Return: 1 if input is alphabetic character or 0 if is not
*/

int _isalpha(int c)
{
	if (c > 64 && c < 91 || c > 96 && c < 123)
		return (1);
	else
		return (0);
}
