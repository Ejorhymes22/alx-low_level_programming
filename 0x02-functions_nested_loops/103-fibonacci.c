#include <stdio.h>

/**
 * main - prints even fibonaci number sum
 *
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = 2;
	long int sum = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
			sum += c;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
