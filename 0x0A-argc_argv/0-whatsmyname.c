#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the name of the programe
 * @argc: num of arguments
 * @argv: the pointrr to array of arguments
 *
 * Return: success
 */

int main(__attribute__((unused))int argc, char **argv)
{
	printf("%s\n", *argv);
	exit(0);
}
