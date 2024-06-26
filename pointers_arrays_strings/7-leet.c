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
	int i, j, len = 0;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		for (j = 0; i < 10; j++)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j]
		}
	}
	return (str);
}
