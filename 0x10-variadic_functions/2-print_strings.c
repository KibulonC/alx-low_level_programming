#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *string;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
