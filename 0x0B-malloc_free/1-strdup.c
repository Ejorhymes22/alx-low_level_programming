#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function return a pointer to the new string whick 
 * is a duplicate of the string str.
 * @str: string to be duplicated
 *
 * Return: pointer to the new allocated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len = 0;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	ptr = (char *)malloc((len) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	
	ptr[i] = '\0';
	return (ptr);
}
