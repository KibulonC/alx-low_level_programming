#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: is the char to be checked.
 * Return: Return 1 if c is a letter, and 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
