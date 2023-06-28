#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer
 *
 * Return:
 */
void rev_string(char *s)
{
	int len = 0;
	char *st = s;
	char *en = s;

	while (*en != '\0')
	{
		len++;
		en++;
	}

	en--;

	while (st < en)
	{
		char temp = *st;
		*st = *en;
		*en = temp;

		st++;
		en--;
	}
}
