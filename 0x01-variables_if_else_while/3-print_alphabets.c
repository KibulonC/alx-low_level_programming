#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(let[i]);
	}
	putchar('\n');
	return (0);
}
