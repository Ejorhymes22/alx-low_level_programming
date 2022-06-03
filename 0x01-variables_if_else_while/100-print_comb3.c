#include <stdio.h>

/**
 * main - prints all possible diggerent combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 1;

	while (i < 10)
	{
		while (j < 10)
		{
			if (j <= i)
			{
				j++;
				continue;
			}
			else
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = 2;
	}
	putchar('\n');
	return (0);
}
