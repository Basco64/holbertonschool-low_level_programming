#include "main.h"

/**
 * _atoi - Function that convert a string to an integer
 *
 * @s: The strinf input
 *
 * Return: The number
 */

int _atoi(char *s)
{
	int i, result = 0, sign = -1, exist = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			exist = 1;

			if (result < 0)
				result = (result * 10) - (s[i] - '0');
			else
				result = (s[i] - '0') * -1;

			if (s[i + 1] < '0' && s[i + 1] > '9')
				break;
		}
	}

	if (exist == 0)
		return (0);
	if (sign < 0)
		result *= -1;

	return (result);
}
