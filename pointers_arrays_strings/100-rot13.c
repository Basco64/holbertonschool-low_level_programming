#include "main.h"

/**
 * rot13 - Encode a string using Rot13
 *
 * @str: The input string
 *
 * Return: The string encoded
*/

char *rot13(char *str)
{
	int i, j;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
