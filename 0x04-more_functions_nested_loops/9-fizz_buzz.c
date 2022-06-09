#include <stdio.h>

/**
 * main - prints numbers 1-100 printing fizz for mult
 * iple of 3 and buzz for multiple of 5 and fizzbuzz for both.
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (!(i % 3) && !(i % 5))
			printf("FizzBuzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else if (!(i % 5))
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
