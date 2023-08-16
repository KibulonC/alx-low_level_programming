#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: index of first element(int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
