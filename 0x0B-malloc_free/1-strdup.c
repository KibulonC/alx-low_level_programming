#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to string to be duplicated
 *
 * Return: pointer on sucess or NULL on fail
 */
char *_strdup(char *str)
{
	char *dup;
	int a, b = 0;

	if (str == 0)
	{
		return (NULL);
	}

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	dup = malloc(sizeof(char) * (a + 1));

	if (dup == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
	{
		dup[b] = str[b];
	}
	return (dup);
}
