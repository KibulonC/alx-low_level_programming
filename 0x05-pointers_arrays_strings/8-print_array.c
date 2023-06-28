#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers and new line.
 * @a: pointer
 * @n: number of elements
 *
 * Return: elements of an array.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
