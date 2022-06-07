#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start from
 *
 * Return: none
 */

void print_to_98(int n)
{
	int i;

	printf("%d", n);
	if (n < 98)
	{
		n++;
		for (i = n; i < 99; i++)
			printf(", %d", i);
	}
	else if (n > 98)
	{
		n--;
		for (i = n; i > 97; i--)
			printf(", %d", i);
	}
	printf("\n");
}
