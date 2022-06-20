#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a 
 * square matrix of integers
 * @a: the array matrix
 * @size: the size of the square array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 1;
	int lsum = 0;
	int rsum = 0;

	while (i < size)
	{
		lsum += a[(size + 1) * i];
		i++;
	}
	while (j <= size)
	{
		rsum += a[(size - 1) * j];
		j++;
	}
	printf ("%d, %d\n", lsum, rsum);
}
