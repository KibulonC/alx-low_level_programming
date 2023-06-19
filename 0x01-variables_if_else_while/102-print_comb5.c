#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num1 % 10 = 0; num1 % 10 < 9; num1 % 10++)
		{
			for (num2 = 0; num2 < 10; num2++)
			{
				for (num2 % 10 = num2 + 1; num2 % 10 < 10; num2 % 10++)
				{
					putchar(num1 + '0');
					putchar(num1 % 10 + '0');
					putchar(' ');
					putchar(num2 + '0');
					putchar(num2 % 10 + '0');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
