#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 *
 * Return: # to print the square or new line if size is 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		i = 1;
		while (i <= size)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}


