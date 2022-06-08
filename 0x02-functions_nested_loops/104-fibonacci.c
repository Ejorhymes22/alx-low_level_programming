#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 numbers of fibonacci seq
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c = 0;
	int i = 0;

	printf("%lu", a);
	printf(", %lu", b);

	while (i < 98)
	{
		c = b + a;
		printf(", %lu", c);
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
