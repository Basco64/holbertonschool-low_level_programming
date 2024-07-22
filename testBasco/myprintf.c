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
	int i, j, count = 0;
	va_list args;

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
					specifiers[j].function(args);
					break;
				}
			}
			
			if (specifiers[j].letter == '\0')
				_printf("Not implemented yet");
		} else
			_putchar(format[i]);
		count++;
	}
	va_end(args);
	return (count);
}
