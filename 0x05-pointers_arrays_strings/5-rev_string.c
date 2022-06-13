#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k;
	char c;

	while (s[i] != '\0')
		i++;

	k = (i + 1) / 2;
	i--;

	while ((k) > 0)
	{
		c = s[j];
		s[j++] = s[i];
		s[i--] = c;
		k--;
	}
}
