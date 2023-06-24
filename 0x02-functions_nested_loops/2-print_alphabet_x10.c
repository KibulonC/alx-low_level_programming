#include "main.h"
/**
 * Alphabets - prints 10 times the alphabet, in lowercase
 *
 *Return:
 */
void print_alphabet_x10(void)
{
	char let;
	int i;

	i = 0;
	while (i < 10)
	{
		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		_putchar('\n');
		i++;
	}
}
