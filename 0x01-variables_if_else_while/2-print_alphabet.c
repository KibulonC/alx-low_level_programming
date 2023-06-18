#include <stdio.h>

/**
 * main - Prints Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char let;

	for(let = 'a'; let <= 'z'; let++;)
	{
		putchar(let);
	}
	putchar("\n");
	return (0);
}
