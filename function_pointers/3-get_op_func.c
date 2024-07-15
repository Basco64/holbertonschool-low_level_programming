#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Function that select the good operation
 *
 * @s: The operator
 *
 * Return: The pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}

	return (NULL);
}
