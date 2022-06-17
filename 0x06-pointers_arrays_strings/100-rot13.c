#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string
 *
 * Return: pointer to the string
 */

char *rot13(char *n)
{
	int i = 0;
	int j = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (n[i])
	{
		while (s[j])
		{
			if (n[i] == s[j])
			{
				n[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (n);
}
