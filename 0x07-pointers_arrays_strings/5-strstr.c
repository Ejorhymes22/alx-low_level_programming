#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	int len = 0;

	while (needle[len])
		len++;
	len--;

	while (*haystack)
	{
		while (haystack[i] == needle[j])
		{
			flag++;
			i++;
			j++;
			if (flag == len)
				return (haystack);
		}
		flag = 0;
		haystack++;
		j = 0;
		i = 0;
	}
	return (NULL);
}
