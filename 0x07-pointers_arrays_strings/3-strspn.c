#include "main.h"
#include <string.h>

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string
 * @accept: the substing
 *
 * Return: number of bytes int the initial segment of s 
 * which consist only of bythes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (*s)
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				n++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			return (n);
		s++;
		i = 0;
	}
	return (n);
}
