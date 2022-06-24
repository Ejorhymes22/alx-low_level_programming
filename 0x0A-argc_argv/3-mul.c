#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments of the command line
 * @argc: number of arg
 * @argv: value of arg
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	exit(0);
}
