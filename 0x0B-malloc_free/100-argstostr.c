#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: num of arg
 * @av: the argument pointer
 *
 * Return: pointer to the areg
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
			j++;
		k += j;
		i++;
	}
	i = 0;
	j = 0;

	s = (char *) malloc((k) * sizeof(char));
	if (!s)
		return (NULL);
	k = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			s[k++] = av[i][j];
			j++;
		}
		s[k++] = '\n';
		i++;
		j = 0;
	}
	return (s);
}
