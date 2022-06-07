#include <stdio.h>

/**
 * main - prints sum of multiple of 3 and 5 below 1024
 *
 * Return: none
 */


int main(void)
{
	int x = 0;
	int sum = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum += x;	
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
