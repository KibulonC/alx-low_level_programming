#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new duplicate string
 * @str: string parameter.
 *
 * Return: Pointer to duplicated string , NULL if fail.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
