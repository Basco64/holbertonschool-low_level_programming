#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: The alphabet
*/

int main(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
