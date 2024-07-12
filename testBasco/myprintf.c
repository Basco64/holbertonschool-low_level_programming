#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printcequejetedis - My printf
 *
 * @str: The string
 * @...: Number of arguments undefined
 *
 * Return: 0
*/

int printcequejetedis(const char *str, ...)
{
	int i, j, count = 0;
	va_list args;

	va_start(args, str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			for (j = 0; specifiers[j].letter != '\0'; j++)
			{
				if (str[i] == specifiers[j].letter)
				{
					specifiers[j].function(args);
					break;
				}
			}
		} else
			putchar(str[i]);
		count++;
	}
	va_end(args);
	return (count);
}
