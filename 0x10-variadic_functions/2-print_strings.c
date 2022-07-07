#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: seprates the string
 * @n: num of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *q;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		q = va_arg(list, char *);
		if (!q)
			printf("(nil)");
		else
			printf("%s", q);
		if (i < n - 1)
			printf("%s", separator);
		i++;
	}
	if (n != 0)
		printf("\n");
	va_end(list);
}
