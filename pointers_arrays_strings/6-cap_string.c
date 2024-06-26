#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string
 *
 * @str: The input String
 *
 * Return: The string modified
*/

char *cap_string(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 0; i < len; i++)
	{
		if (
				str[i] == ' ' ||
				str[i] == ',' ||
				str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == '}' ||
				str[i] == '\t' ||
				str[i] == '\n'
				)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
