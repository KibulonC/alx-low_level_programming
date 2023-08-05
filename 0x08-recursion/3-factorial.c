#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number to find its factorial.
 *
 * Return: factoria of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
