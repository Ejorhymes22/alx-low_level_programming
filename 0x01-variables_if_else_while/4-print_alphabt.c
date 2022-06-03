#include <stdio.h>

/**
 * main - print alphabets except q and e
 *
 * Return: 0
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n == 'e' || n == 'q')
			;
		else
			putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
