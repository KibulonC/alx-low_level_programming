#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes
 *
 * Return: pointer to conc string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
	{
		str1++;
	}
	while (s2 && s2[str2])
	{
		str2++;
	}

	if (n < str2)
	{
		conc = malloc(sizeof(char) * (str1 + n + 1));
	}
	else
		conc = malloc(sizeof(char) * (str1 + str2 + 1));
	if (!conc)

		return (NULL);

	while (i < str1)
	{
		conc[i] = s1[i];
		i++;
	}
	while (n < str2 && i < (str1 + n))
	{
		conc[i++] = s2[j++];
	}
	while (n >= str2 && i < (str1 + str2))
	{
		conc[i++] = s2[j++];
	}
	conc[i] = '\0';
	return (conc);
}
