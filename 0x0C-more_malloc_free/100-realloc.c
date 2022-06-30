#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ppointer to the memory prevoisly allocated
 * @old_size: old bytes
 * @new_size: new bytes
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *s;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}
	if ((new_size == 0 && ptr) || (new_size < old_size))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size && ptr)
	{
		s = (int *)malloc(new_size);
		if (!s)
		{
			free(ptr);
			free(s);
			return (NULL);
		}
		s = (int *)ptr;
		free(ptr);
		return ((void *)s);
	}
	return (NULL);
}
