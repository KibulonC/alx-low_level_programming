#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @x: pointer
 *
 * Return: char in uppercase.
 */
char *string_toupper(char *x)
{
	int i;

	i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - 'a' + 'A';
		}
		i++;
	}
	return (x);
}
