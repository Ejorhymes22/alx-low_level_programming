#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an arry
 * @array: the array to be iterated
 * @size: size of the array
 * @action: function pointer to be executed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
		action(array[i++]);
}
