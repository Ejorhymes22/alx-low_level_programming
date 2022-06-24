#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the number of arguments
 * @argc: num of arg
 * @argv: pointer to array
 *
 * Return: SUCCESS
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	exit(0);
}
