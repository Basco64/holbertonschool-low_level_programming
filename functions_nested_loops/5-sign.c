#include "main.h"

/**
 * print_sign - Function for print if an input is greater,
 * equal or less than zero
 *
 * @n: the input
 *
 * Return: Respectively 1, 0 or -1
*/

int print_sign(int n)
{
	if (n < 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
