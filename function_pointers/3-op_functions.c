#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - Function that add 2 numbers
 *
 * @a: First int
 * @b: Second int
 *
 * Return: The result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that substract b to a
 *
 * @a: First int
 * @b: Second int
 *
 * Return: The result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies 2 numbers
 *
 * @a: First int
 * @b: Second int
 *
 * Return: The result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divide b to a
 *
 * @a: First int
 * @b: Second int
 *
 * Return: The result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Function that returns the remainder of the division
 *
 * @a: First int
 * @b: Second int
 *
 * Return: The remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
