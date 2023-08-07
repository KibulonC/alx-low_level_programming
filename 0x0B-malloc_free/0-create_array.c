#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,with specific char at the start
 * @size: size of array
 * @c: specific char to intialize array
 *
 * Return: pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		str[n] = c;
	}
	return (str);
}
