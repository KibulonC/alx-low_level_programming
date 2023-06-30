#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @str: pointer
 *
 * Return: *str
 */
char *rot13(char *str)
{
	int a, b;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == norm[b])
			{
				str[a] = rot[b];
				break;
			}
		}
	}
	return (str);
}
