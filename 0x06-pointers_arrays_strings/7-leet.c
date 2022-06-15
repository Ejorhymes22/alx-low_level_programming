#include "main.h"

/**
 * leet - changes to 1337
 * @s: the string
 *
 * Return: pointer to the new string
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char arr[] = "aeotlAEOTL";
	char rep[] = "4307143071";

	while (s[i])
	{
		while (arr[j])
		{
			if (arr[j] == s[i])
				s[i] = rep[j];
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
