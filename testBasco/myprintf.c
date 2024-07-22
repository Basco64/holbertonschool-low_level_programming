#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - My printf
 *
 * @format: Pointer to the formated string
 * @...: Number of arguments undefined
 *
 * Return: 0
*/

int _printf(const char *format, ...)
{
	char *result;
	int i, j, k = 0, count = 0, len = 0;
	va_list args;

	while (format)
		len++;

	result = malloc(len);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			for (j = 0; specifiers[j].letter != '\0'; j++)
			{
				if (format[i] == specifiers[j].letter)
				{
					specifiers[j].function(args, result, &k);
					break;
				}
			}
			
			if (specifiers[j].letter == '\0')
				_printf("Not implemented yet");
		} else
			result[k] = format[i];
		k++;
	}
	va_end(args);

	write(1, result, len);
	free(result);
	return (count);
}
