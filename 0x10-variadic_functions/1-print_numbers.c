#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with separation
 * @seperator: seperates nunbers
 * @n: num of numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1 &&  separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
