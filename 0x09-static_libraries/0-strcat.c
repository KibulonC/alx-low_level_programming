#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: string
 * @src: string
 *
 * Return: 2 concatenated strings.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
	temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';
	return (dest);
}
