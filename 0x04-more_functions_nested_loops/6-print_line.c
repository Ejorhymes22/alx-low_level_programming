#include "main.h"

/**
 * print_line - draws a straight line in the termonal
 * @n: number of times to draw
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('-');
	_putchar('\n');
}
