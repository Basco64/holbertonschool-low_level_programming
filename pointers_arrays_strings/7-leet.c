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
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
