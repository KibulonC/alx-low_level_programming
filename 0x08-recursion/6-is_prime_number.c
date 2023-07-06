#include "main.h"

int act_prime(int n, int i);

/**
 * is_prime_number - returns 1 if n is prime or 0 if not.
 * @n: number checked if is a prime number
 *
 * Return: 1 if n is prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (act_prime(n, n - 1));
}

/**
 * act_prime - calculate a prime number recursively
 * @n: number to ascertain
 * @i: iterator
 *
 * Return: 1 if n is prime ansd 0 if not
 */
int act_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (act_prime(n, i - 1));
}
