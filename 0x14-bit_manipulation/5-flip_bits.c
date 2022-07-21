#include "main.h"

/**
 * flip_bits - counts the number of flips to
 * change one num to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: flip num
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l;
	int q = 0;
	int j = 0;

	l = n ^ m;

	while (l)
	{
		l = l >> j;
		if (l & 1)
			q++;
		if (j < 1)
			j++;
	}
	return (q);
}
