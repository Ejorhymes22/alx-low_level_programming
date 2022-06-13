#include "main.h"

/**
 * swap_int - swaps int values using a pointer
 * @a: number1
 * @b: number2 to be swaped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
