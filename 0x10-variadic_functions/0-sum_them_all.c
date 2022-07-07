#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - sums all arguments of a function
 * @n: the number of arguments
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	va_end(list);
	return (sum);
}
