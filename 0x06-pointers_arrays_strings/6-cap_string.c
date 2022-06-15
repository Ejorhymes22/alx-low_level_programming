#include "main.h"

/**
 * cap_string - capitalizesall words of a string
 * @s: the string
 *
 * Return: pointer to the string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char a[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};

	if (s[j] >= 'a' && s[j] <= 'z')
		s[j] = s[j] - 32;

	while (s[j])
	{
		while (a[i])
		{
			if (s[j] == a[i] && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
				s[j + 1] = s[j + 1] - 32;
			i++;
		}
		j++;
		i = 0;
	}
	return (s);
}
