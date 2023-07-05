#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: first number of bytes of the memory area pointed to by @s
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
