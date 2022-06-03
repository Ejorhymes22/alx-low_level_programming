#include <stdio.h>

/**
 * main - outputs alphabets in reverse
 *
 * Return: 0
 */

int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
