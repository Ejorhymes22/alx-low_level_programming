#include "main.h"

/**
 * _strlen_recursion - prints tge length of a string
 * @s: the pointer to the string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
