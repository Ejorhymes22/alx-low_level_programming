#include <stdio.h>

/**
 * main - prints all possible different combinations of 3 digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;

	while (i < 8)
	{
		while (j < 9)
		{
			if (j <= i)
			{
				j++;
				continue;
			}
			while (k < 10)
			{
				if (k <= j || k <= i)
					;
				else
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
						;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
			k = 3;	}
		i++;
		j = 2;
		k = 3;
	}
	putchar('\n');
	return (0);
}
