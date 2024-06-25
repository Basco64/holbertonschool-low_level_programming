#include "main.h"

/**
 * string_toupper - Switch lowercase to uppercase
 *
 *@str: The input string
 *
 * Return: The string with uppercase
*/

char *string_toupper(char *str)
{
	int i, len = 0;
	
	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] += 17;
		}
	}
}
