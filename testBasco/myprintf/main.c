#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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

	int len;
	int len2;
	unsigned int ui;
	void *addr;

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Je vais manger %d %s.\n", num, article);
	_printf("La lettre %c est la premi√®re lettre de l'aplhabet", minu);
	_printf(", elle existe aussi en mmajuscule : %c .\n", maju);
	_printf("%u est un nombre non signe.\n©", num);
	_printf("%i est un nombre signe.\n", num2);
	_printf("%ld ne devrais pas etre implementer.\n", lgnum);

	_printf("\n\n\tTest Holberton\n");


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");


	len = _printf("%s", article);
	printf("\t");
	len2 = printf("%s", article);

	printf("\nlen = %d, len2 = %d\n", len, len2);


        len = _printf("%p", addr);
	printf("\t");
        len2 = printf("%p", addr);

        printf("\nlen = %d, len2 = %d\n", len, len2);

	len = _printf("%s %s", article,article);
	printf("\t");
        len2 = printf("%s %s", article,article);

        printf("\nlen = %d, len2 = %d\n", len, len2);

	len = _printf("Premier : %s %p %R %c %i %u %d %o %% %x %X", article, addr, minu, num2, num, ui, ui, ui);
        printf("\n");
        len2 = printf("Second  : %s %p %R %c %i %u %d %o %% %x %X", article, addr, minu, num2, num, ui, ui, ui);

        printf("\nlen = %d, len2 = %d\n", len, len2);



	len = _printf("");
	printf("\n");
	len2 = printf("");
	printf("\n");
	_printf("%d", len);
	printf("\n");
	printf("%d", len);
	printf("\n");

	return (0);
}
