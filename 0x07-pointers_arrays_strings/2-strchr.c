#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: the NULL OR first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
