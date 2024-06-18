#include <stdio.h>

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: the Jack Bauer journey
*/

void main()
{
	int minut,hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minut = 0; minut <= 59; minut ++)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minut / 10) + '0');
			putchar((minut % 10) + '0');
			putchar('\n');
		}
	}
}
