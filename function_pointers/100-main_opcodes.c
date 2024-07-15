#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints the opcodes of its own main function
 *
 * @argc: Argument count
 * @argv: Arguments Values (Array of String)
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int arg = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < arg; i++)
	{
		/**
		 * "%02hhx": Format hexa sur 2 chiffres
		 * "*((char *)main + i)": Pointe vers 'main' et accede au 'i'ème octe
		 */

		printf("%02hhx", *((char *)main + i));

		if (arg - 1 > i)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
