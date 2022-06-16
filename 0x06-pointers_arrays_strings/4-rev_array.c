#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array pointer to first element
 * @n: number of element in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j = 0;
	int c;
	
	n = n - 1;
	n = n / 2;
	
	while (n)
	{
		c = a[j];
		a[j++] = a[i];
		a[i--] = c;
		n--;
	}
}
