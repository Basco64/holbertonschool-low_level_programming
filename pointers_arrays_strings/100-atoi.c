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
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] > '0' && s[i] < '9')
		{
			if (s[i - 1] == '-')
				_putchar('-');
			if (s[i - 1] == '+')
				_putchar('+');
			_putchar(s[i] + '0');
			if (s[i + 1] < '0' && s[i + 1] > '9'
				break;
		}
	}
	return (0);
}
