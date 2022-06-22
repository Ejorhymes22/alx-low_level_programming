#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: int the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns sq root
 * @n: number
 * @i: variable incrementable
 *
 * Return: sqrt
 */


int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n || n <= 0)
		return (-1);
	return (_sqrt(n, i + 1));
}
