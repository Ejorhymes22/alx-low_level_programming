#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the number 1
 * @n2: the number 2
 * @r: the buffer
 * @size_r: the size of the buffer
 *
 * Return: pointer to the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int sum = 0;
	int addnext = 0;
	int len1 = 0;
	int len2 = 0;
	int x, y;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	len1--;
	len2--;

	n1 += len1;
	n2 += len2;
	*(r + size_r) = '\0';

	while (len1 >= 0)
	{
		x = n1[len1] + '0';
		y = n2[len2] + '0';

		sum = x + y + addnext;
		while (1)
		{
			if (sum <= 9)
			{
				if (i >= size_r)
					return (0);
				r[i++] = sum;
				break;
			}
			addnext = sum / 10;
			sum = sum % 10;
		}
		len1--;
		len2--;
		sum = 0;
	} 
	return (r);
}

