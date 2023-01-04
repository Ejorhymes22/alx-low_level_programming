#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump search lgorithm
 * @array: the sorted array
 * @size: size fo array
 * @value: of the array
 *
 * Return: -1 or the index
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	size_t ssize = sqrt(size);

	for (i = 0; i <= (size + ssize); i += ssize)
	{
		if (array[i] != value && i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i + ssize] >= value || (array[size - 1] < value && array[i + ssize] >= value))
		{
			j = i;
			printf("Value found between indexes [%ld] and [%ld]\n", i, i + ssize);
			for (; i <= (j + ssize); i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}
	}
	return (-1);
}
