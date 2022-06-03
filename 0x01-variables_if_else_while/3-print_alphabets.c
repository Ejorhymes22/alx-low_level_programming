#include <stdio.h>

/**
 * main - printsout aphabets in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	int n = 'a';
	int m = 'A';

	while (n <= 'z')
	{
		putchar(n);
		n = n + 1;
	}
	while (m <= 'Z')
	{
		putchar(m);
		m = m + 1;
	}
	putchar('\n');
	return (0);
}
