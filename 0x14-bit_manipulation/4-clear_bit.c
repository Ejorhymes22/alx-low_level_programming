#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 * @n: the num
 * @index: its index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
