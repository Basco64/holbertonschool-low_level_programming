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
	int i, d, c, count = 0;
	char *s;
	va_list args;

	va_start(args, str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			switch (str[i])
			{
				case 'd':
					{
						d = va_arg(args, int);
						print_int(d);
						break;
					}
				case 'c':
					{
						c = va_arg(args, int);
						putchar(c);
						break;
					}
				case 's':
					{
						s = va_arg(args, char*);
						print_string(s);
						break;
					}
				default:
					{
						printf("Pas encore implementé !");
					}
			}
		} else
			putchar(str[i]);
		count++;
	}
	va_end(args);
	return (count);
}
