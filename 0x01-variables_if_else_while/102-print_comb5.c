#include <stdio.h>
/**
 * main - prints all possible combinations of 2 2 digit numbers
 *
 * Return: success
 */

int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 99)
	{
		while (j < 100)
		{
			if (j <= i)
			{
				j++;
				continue;
			}
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
			if ((i / 10 == 9) && (i % 10 == 8) && (j / 10 == 9) && (j % 10 == 9))
				;
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = 2;
		i++;
	}
	putchar('\n');
	return (0);
}
