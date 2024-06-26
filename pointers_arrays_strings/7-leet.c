#include "main.h"

/**
 * leet - Encode a string into '1337'
 *
 * @str: The input string
 *
 * Return: The string encoded
*/

char *leet(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] == 65 || str[i] == 97)
			str[i] = 4;
		if (str[i] == 69 || str[i] == 101)
			str[i] = 3;
		if (str[i] == 79 || str[i] == 111)
			str[i] = 0;
		if (str[i] == 84 || str[i] == 116)
			str[i] = 7;
		if (str[i] == 76 || str[i] == 108)
			str[i] = 1;
	}
	return (str);
}
