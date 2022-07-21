#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: the binary
 *
 * Return: the int
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int c;
	unsigned int sum = 0;
	unsigned int y = 0;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;
	i--;

	while (i >= 0)
	{
/*		if (b[i] != 0 || b[i] != 1)
			return (0);*/
		c = b[i] - '0';
		if (c > 1)
                        return (0);

		sum += (c * power(2, y));
		i--, y++;
	}
	return (sum);
}

/**
 * power - gets the power raised
 * @num: number to be rasied
 * @y: the power
 *
 * Return: the total
 */

unsigned int power(unsigned int num, unsigned int y)
{
	if (y == 0)
		return (1);
	return (num * power(num, y - 1));
}
