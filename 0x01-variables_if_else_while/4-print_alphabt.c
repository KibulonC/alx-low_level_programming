#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
