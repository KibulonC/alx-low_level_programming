#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameter
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ad;

	va_start(ad, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ad, unsigned int);
	}

	if (n == 0)
		return (0);

	va_end(ad);
	return (sum);
}
