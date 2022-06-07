#include "main.h"

/**
 * print_alphabet - this prints alphabets a-z lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
