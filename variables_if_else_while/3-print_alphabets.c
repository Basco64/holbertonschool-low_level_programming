#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase
 * Return: The alphabet
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
