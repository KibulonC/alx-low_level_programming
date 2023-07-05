#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @c: character to locate
 * @s: string being checked
 *
 * Return: pointer to located c or NULL if none.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
