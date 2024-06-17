#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the reverse alphabet
 * Return: The reverse alphabet
*/

int main(void)
{
	int i;

	for (i = 122; i > 97; i--)
	{
		putchar(i);
	}
	return (0);
}

