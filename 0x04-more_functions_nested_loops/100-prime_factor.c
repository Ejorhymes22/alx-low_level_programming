#include <stdio.h>

/**
 * main - print factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long int i, j, flag;
	long int number = 612852475143;
	long int num = number;

	for (i = 2; i < num / 2; )
	{
		flag = 0;
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				flag++;
		}
		if (flag == 1)
		{
			if (number % i == 0)
			{

				if (number == i)
				{
					printf("%ld\n", i);
					break;
				}
				number = number / i;
			}
			else
				i++;
		}
		else
			i++;
	}
	return (0);
}
