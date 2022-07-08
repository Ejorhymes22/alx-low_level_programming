#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: specifiers
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list list;
	char *p;

	while (format[j])
		j++;

	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;	
			case 's':
				p = va_arg(list, char *);
				if (!p)
					p = "(nil)";
				printf("%s", p);
				break;
			default:
				i++;
				continue;
		}
		if (i < j - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
