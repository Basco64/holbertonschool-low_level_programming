#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a password
 *
 * Return: The password
 */

int main(void)
{
	int password[100], i, sum = 0, n;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
		putchar(password[i]);
		if (sum >= 2772)
			break;
	}

	if (sum != 2772)
	{
		n = 2772 - sum;
		sum += n;
		putchar(n);
	}

	return (0);
}
