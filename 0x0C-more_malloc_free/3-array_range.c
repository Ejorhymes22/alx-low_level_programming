#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimun value
 * @max: macimun value
 *
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (max < min)
		return (NULL);
	p = malloc(((min + max) + 1) * sizeof(int));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (; min <= max; min++)
		p[i++] = min;
	return (p);
}
