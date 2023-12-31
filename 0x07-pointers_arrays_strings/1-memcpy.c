#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes to be copied.
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (ptr_dest);
}
