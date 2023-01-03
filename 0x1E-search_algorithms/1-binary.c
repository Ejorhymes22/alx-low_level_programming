#include <stdio.h>
#include "search_algos.h"
#include <string.h>


/**
 * binary_search - searches for a value in a sorted list using binary search
 * @array: pointer to the array
 * @size: the size of the array
 * @value: value to search for
 *
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx = size;
	int *arr = array;
	size_t i;
	size_t m;

	while (idx)
	{
		idx = (idx / 2);
		if (size % 2)
			m = idx;
		else
			m = idx - 1;
		for (i = 0; i < size; i++)
			printf("%d ", arr[i]);
		printf("\n");
		if (arr[m] == value)
			return (idx);
		else if (arr[m] < value)
		{
			if (size % 2)
				arr += (idx + 1);
			else
				arr += idx;
			size -= (idx);
		}
		else if (arr[m] > value)
		{
			size -= (idx + 1);
		}
	}
	return (-1);
}
