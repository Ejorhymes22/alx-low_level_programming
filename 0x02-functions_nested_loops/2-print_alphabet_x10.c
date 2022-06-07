#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: none
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		for (; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		i++;
		ch = 'a';
	}
}
