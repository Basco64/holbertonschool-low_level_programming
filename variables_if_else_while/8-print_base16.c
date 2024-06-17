#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all the numbers of base 16
 * Return:  base 16 in lowercase
*/

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar((i % 10) + '0');
		else
			putchar(i + 'a' - 10);
	}
	putchar('\n');
	return (0);
}

