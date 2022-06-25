#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make a change for an amount of
 * money
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int arr[5] = {25, 10, 5, 2, 1};
	int change = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	*argv[1] = atoi(argv[1]);

	while (arr[i] && *argv[1] >= 0)
	{
		if (*argv[1] / arr[i])
		{
			change += *argv[1] / arr[i];
			*argv[1] %= arr[i];
		}
		if (*argv[1] == 0)
		{
			printf("%d\n", change);
			break;
		}
		i++;
	}
	if (*argv[1] < 0)
		printf("0\n");
	return (0);
}
