#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements ofo an array of integers
 * @a: the array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}
