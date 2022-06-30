#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: the elements of an array
 * @size: size bytes og each
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;
	unsigned int prod = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(prod);
	if (!p)
	{
		return (NULL);
	}

	while (i < (prod))
		p[i++] = 0;

	return (p);
}
