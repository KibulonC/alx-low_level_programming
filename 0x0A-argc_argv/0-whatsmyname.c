#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments passed
 * @argv: strings of arguments passed
 *
 * Return: 0 on sucesss
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	while (i < 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
