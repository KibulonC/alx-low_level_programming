#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 sucess.
 */
int main(int argc, char *argv[])
{
	int i, prod;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			prod = atoi(argv[i]) * atoi(argv[i - 1]);
		}
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
