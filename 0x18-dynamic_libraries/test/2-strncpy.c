#include "main.h"

/**
 * _strncpy - copies src into the buffer dest
 * @dest: the buffer
 * @src: the source
 * @n: the bytes to be copied
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src)
		dest[i++] = *src++;

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
