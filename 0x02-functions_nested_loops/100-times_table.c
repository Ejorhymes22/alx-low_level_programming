#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number for the table
 * Return: none
 */

void print_times_table(int n)
{
	int i = 0;
       	int j = 0; 
	int x;

	if (n < 0 || n > 15)
		;
	else
	{
		for (; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				if (j == 0)
					_putchar(x + '0');
				else if (x >= 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (x < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
				else if (x > 9 && x < 100)
				{
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x > 99)
				{
					_putchar(((x / 10) / 10) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
				if (j == n)
					_putchar('\n');
			}
		}
	}
}
