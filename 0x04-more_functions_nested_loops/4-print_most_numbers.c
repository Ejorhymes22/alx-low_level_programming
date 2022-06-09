#include "main.h"

/**
 * print_most_numbers - prinsts numbers excluding 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
