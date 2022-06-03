#include <stdio.h>

/**
 * main - prints out base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;
	int n = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}


	while (n <= 'f')
	{
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
