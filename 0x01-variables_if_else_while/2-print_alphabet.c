#include <stdio.h>

/**
 * main - Prints Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let[26] = "abcdefghijklmnopqrstuvwyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(let[i]);
	}
	putchar('\n');
	return (0);
}
