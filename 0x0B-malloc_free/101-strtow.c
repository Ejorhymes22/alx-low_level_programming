#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: pointer to the array of words
 */

char **strtow(char *str)
{
	char **p;
	int i = 1;
	int num;
	int j = 0;
	int k = 0;

	num = no_of_words(str);

	p = (char **) malloc((num + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' && str[i])
			i++;

		for (; str[i] != ' ' && str[i]; i++)
			j++;

		p[k] = (char *) malloc((j + 1) * sizeof(char));
		if (!(p[k]))
			return (NULL);

		j = 0;
		k++;
	}

	for (i = 1, j = 0; str[i]; )
	{
		for (; str[i] == ' ' && str[i]; )
			i++;

		for (k = 0; str[i] != ' ' && str[i]; i++, k++)
			p[j][k] = str[i];

		if (str[i])
		{
			p[j][k++] = '\0';
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}

/**
 * no_of_words - gives the num of words in a string
 * @s: the string
 *
 * Return: ni of words
 */

int no_of_words(char *s)
{
	int i = 0;
	int flag = 0;

	while (s[i])
	{
		while (s[i] == ' ' && s[i])
			i++;
		if (s[i] != ' ' && s[i])
			flag++;
		
		while (s[i] != ' ' && s[i])
			i++;
	}
	return (flag);
}
