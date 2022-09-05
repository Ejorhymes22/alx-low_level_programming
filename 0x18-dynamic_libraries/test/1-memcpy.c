#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copy
 * @src: source
 * @n: numbers to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		dest[i++] = *src++;
	return (dest);
}
