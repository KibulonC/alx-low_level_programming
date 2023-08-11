#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range of vales in array
 * @max: maximum range of values in the array
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	arr = malloc(sizeof(int) * max - min + 1);

	if (arr == 0)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
		arr[i] = min++;

	return (arr);
}
