#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int n = size;

	for (; j < n; j++)
	{
		for (; i < size - 1; i++)
			_putchar(' ');
		i--;
		for (; i < n - 1; i++)
			_putchar('#');

		size--;
		_putchar('\n');
		i = 0;
	}
	if (n < 1)
		_putchar('\n');
}
