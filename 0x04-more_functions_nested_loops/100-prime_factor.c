#include <main.h>

/**
 * main - print factor of a number
 *
 * Return: 0
 */

int main(void)
{
	unsigned int i, j;
	int flag = 0;
	unsigned int arr[];

	for (i = 2; i < 1231952; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				flag++;
		}
