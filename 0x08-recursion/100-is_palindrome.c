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


/**
 * _pal_check - checks if front and end characters match
 * @n: the lenght of string
 * @d: the pointer to the beginning of string
 * @j: the pointer to the end fo string
 * @i: incremet check
 * @flag: check if they match
 *
 * Return: flag
 */

int _pal_check(int n, char *d, char *j, int i, int flag)
{
	if (*d == *j)
		flag++;
	if (i == n)
		return (flag);

	return (_pal_check(n, d + 1, j - 1, i + 1, flag));
}


/**
 * is_palindrome - returns 1 if a string isi a palindrome or 0 if not
 * @s: the string
 *
 * Return: int 1 0
 */

int is_palindrome(char *s)
{
	int len, n, f;
	char *p = s;

	len = _strlen_recursion(s);
	n = len;
	len--;

	n = n / 2;
	p = p + len;

	f = _pal_check(n, s, p, 1, 0);
	if (f == n)
		return (1);
	return (0);
}
