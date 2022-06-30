#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seconde string
 * @n: bytes fo s2
 *
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;
	unsigned int slen1 = 0;
	unsigned int slen2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[slen1])
		slen1++;
	while (s2[slen2])
		slen2++;

	if (slen2 <= n)
		slen2 = slen2;
	else
		slen2 = n;

	p = malloc(sizeof(char) * (slen1 * slen2 + 1));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (i = 0, j = 0; i < slen1; i++, j++)
		p[j] = s1[i];

	for (i = 0; i < slen2; i++, j++)
		p[j] = s2[i];
	p[j] = '\0';
	return (p);
}
