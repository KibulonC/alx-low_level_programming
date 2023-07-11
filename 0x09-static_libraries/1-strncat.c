#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: number of bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0' && n > 0)
	{
		*temp = *sr
		src++;
		temp++;
		n--;
	}
	*temp = '\0';

	return (dest);
}
