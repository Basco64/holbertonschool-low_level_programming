#include "main.h"

/**
 * _islower - check if entry is lowercase or not
 *
 * @c : entry to check
 *
 * Return: a number
*/

int _islower(int c)
{
	if (c > 96  && c < 123)
		return (1);
	else
		return (0);
}
