#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer
 * @b: pointer
 *
 * Return: swapped values.
 */
void swap_int(int *a, int *b)
{
	int val = *a;
	*a = *b;
	*b = val;
}
