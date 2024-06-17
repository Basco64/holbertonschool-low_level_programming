#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 * Return: The alphabet
*/

int main(void)
{
	int i;
	for(i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar("\n");
        return (0);
}
