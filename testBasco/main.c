#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The main test fonction
 *
 * Return: 0
*/

int main(void)
{
	int num = 5;
	char *article = "saucisses";
	char minu = 'a';
	char maju = 'A';

	printcequejetedis("Je vais manger %d %s.\n", num, article);
	printcequejetedis("La lettre %c est la première lettre de l'alphabet, elle existe aussi en majuscle: %c .\n", minu, maju);

	return (0);
}
