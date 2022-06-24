#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arguments of the command line
 * @argc: count of arg
 * @argv: the arguments
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *(argv + i));
	exit(0);
}
