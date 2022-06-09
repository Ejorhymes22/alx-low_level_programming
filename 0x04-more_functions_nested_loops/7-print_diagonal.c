#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the diagonal line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i < n; i++)
	{
		j = 0;
		_putchar('\\');
		if (n > 1)
		{
			_putchar('\n');
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
		}
	}
	if (i > 1)
		_putchar('\\');
	_putchar('\n');
}
