#include "main.h"

/**
 * _strcat - concatenates twostrings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
		i++;

	while (*src)
		dest[i++] = *src++;
	return (dest);
}
