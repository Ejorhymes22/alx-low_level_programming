#include "main.h"

/**
 * _strncat - concatenates two strings up to n or null byte
 * @dest: first string
 * @src: second string
 * @n: the len of the second
 *
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	while (src[j] && j < n)
		dest[i++] = src[j++];
	return (dest);
}
