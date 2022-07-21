#include "main.h"

/**
 * print_binary - prints a binary of a decimal
 * @n: the decimal num
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print(n);
}

void print(unsigned long int n)
{
	unsigned long int j = 1;

        if (n == 0)
                ;
        else
                print(n >> j);
        if (n & 1)
                _putchar('1');
        else if (n)
                _putchar('0');
}
