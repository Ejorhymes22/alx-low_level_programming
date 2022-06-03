#include <stdio.h>

/**
 * main - uses putchar to printout a to z
 *
 * Return: 0
 */
int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
