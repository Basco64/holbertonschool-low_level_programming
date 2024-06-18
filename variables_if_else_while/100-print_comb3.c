#include <stdio.h>

/**
* main -  A program that prints all possible different combinations of two digits
*
* Return: The diffenrents combinations
*/

int main(void)
{
	int firstNum, secondNum;

	for (firstNum = 0; firstNum <= 8; firstNum++)
	{
		for (secondNum = 1; secondNum <= 9; secondNum++)
		{
			if (secondNum > firstNum)
			{
				putchar(firstNum + '0');
				putchar(secondNum + '0');

				if (firstNum != 8 || secondNum != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
