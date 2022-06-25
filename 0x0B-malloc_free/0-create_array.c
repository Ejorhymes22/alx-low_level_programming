#include "main.h"
#include <stdlib.h>

/**
 * create_array - createes an array ofo chars, and initializes
 * it with a specific char
 * @size: the size of the array
 * @c: the char
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(c));
	if (!p)
		return (NULL);

	for (; i < size; i++)
		p[i] = c;

	p[i] = '\0';
	return (p);
}
