#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value
 */

int print_last_digit(int n)
{
	long int last;

	if (n < 0)
		n = -n;
	last = n % 10;

	if (last < 0)
		last = -last;
	_putchar(last % 10 + '0');
	return (last);
}
