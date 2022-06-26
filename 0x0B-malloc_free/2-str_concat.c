#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL or pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len])
		len++;
	while (s2[len])
		len++;
	len++;

	p = (char *) malloc((len + 2) * sizeof(char));
	if (!p)
		return (NULL);

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
		p[i++] = s2[j++];

	p[i] = '\0';
	return (p);
}
