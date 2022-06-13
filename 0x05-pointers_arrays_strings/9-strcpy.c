#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the 
 * terminating null byte to the buffer pointed to by dest.
 * @dest: pointer to where the copy lies
 * @src: pointer to source
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}	
