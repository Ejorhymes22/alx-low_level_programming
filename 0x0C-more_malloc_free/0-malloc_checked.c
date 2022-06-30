#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes
 *
 * Return: a pointer theat is void
 */

void *malloc_checked(unsigned int b)
{
	char *v;

	v = malloc(b);
	if (v)
		return (v);
	exit(98);
}
