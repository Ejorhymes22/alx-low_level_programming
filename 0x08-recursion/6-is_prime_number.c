#include "main.h"

/**
 * is_prime_number - returns 1 if the input inteer is a
 * prime number otherwisw return 0
 * @n: the integer
 *
 * Return: int
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - return 1 or 0
 * @n: the integer
 * @i: incremented variable
 *
 * Return: 0 or 1
 */

int _prime(int n, int i)
{
	if ((n % i == 0 && i < n) || n <= 1)
		return (0);
	else if (i == n)
		return (1);
	return (_prime(n, i + 1));
}
