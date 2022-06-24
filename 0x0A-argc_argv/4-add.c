#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds command line arguments
 * @argc: total numbees of arguments
 * @argv: the argument array
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (!(argc - 1))
		printf("0\n");
	while (argc > i)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i++]);
	}
	if (argc != 1)
		printf("%d\n", sum);
	return (0);
}
