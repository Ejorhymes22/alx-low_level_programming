#include "main.h"

/**
 * set_bit - changes abit to 1 at a particular index
 * @n: the number
 * @index: index
 *
 * Return: 1 0r -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long m = *n;

	if (!n)
		return (-1);
	m = 1 << index;

	*n = m | *n;
	return (1);
}
