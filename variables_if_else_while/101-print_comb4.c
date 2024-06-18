#include <stdio.h>

/**
* main -  A program that prints all possible
* different combinations of three digits
*
* Return: The differents combinations
*/

int main(void)
{
	int firstNum, secondNum, thirdNum;

	for (firstNum = 0; firstNum <= 8; firstNum++)
	{
		for (secondNum = 1; secondNum <= 9; secondNum++)
		{
			for (thirdNum = 2; thirdNum <= 9; thirdNum++)
			{
				if (secondNum > firstNum && thirdNum > secondNum)
				{
					putchar(firstNum + '0');
					putchar(secondNum + '0');
					putchar(thirdNum + '0');
					if (firstNum != 7 || secondNum != 8 || thirdNum != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
