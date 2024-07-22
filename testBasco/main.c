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
	int num2 = -14;
	char *article = "saucisses";
	char minu = 'a';
	char maju = 'A';
	long lgnum = 147483647;

	_printf("Je vais manger %d %s.\n", num, article);
	_printf("La lettre %c est la premi√®re lettre de l'alphbet", minu);
	_printf(", elle existe aussi en mmajuscule : %c .\n", maju);
	_printf("%u est un nombre non signe.©n ", num);
	_printf("%i est un nombre signe.\n", num2);
	_printf("%ld ne devrais pas etre implementer.\n", lgnum);

	return (0);
}
