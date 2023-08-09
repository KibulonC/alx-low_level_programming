#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i, prod;

	if (argc == 3)
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
		return (1);
	}
	return (0);
}
