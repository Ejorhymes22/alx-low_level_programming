#include "main.h"

/**
 * _strcmp - comparres two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0, 1, -1
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int flag = 0;
	int i = 0;

	while (s1[len])
		len++;

	if (*s1 == *s2)
		while (*s1)
		{
			if (*s1++ == *s2++)
			{
				flag++;
				continue;
			}
			else
				break;
		}
	if (flag == len)
		return (0);
	return (s1[i] - s2[i]);
}
