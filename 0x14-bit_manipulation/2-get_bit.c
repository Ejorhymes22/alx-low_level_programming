#include "main.h"

/**
 * get_bit - gets the bit at a particular index
 * @n: the number
 * @index: index
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;

	if (index > 63)
		return (-1);
	if (n & 1)
		return (1);
	return (0);
}
