#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @needle: substring
 * @haystack: string to check for substring
 *
 * Return: pointer to substring or NULL if no substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *h != '\0')
		{
			h++;
			n++;
		}
		if (*h == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
