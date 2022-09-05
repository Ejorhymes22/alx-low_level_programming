#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - searches a string for the first of any of a set of bytes
 * @s: sthe string
 * @accept: the string with the byte
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return (NULL);
}
