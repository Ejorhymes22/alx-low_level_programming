#include <stdio.h>
#include "search_algos.h"
#include <string.h>

int binarySearch(int arr[], size_t l, size_t r, int x);

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
	return (binarySearch(array, 0, size - 1, value));
}

/**
 * binarySearch - searches for a value in a sorted list using binary search
 * @arr: pointer to the array
 * @l: the indelx of firstelement of the array
 * @r: zie of array
 * @x: value to search for
 *
 * Return: index or -1
 */

int binarySearch(int arr[], size_t l, size_t r, int x)
{
	int mid;
	size_t i;

	if (r >= l)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: %d", arr[l]);
		for (i = l + 1; i <= r; i++)
			printf(", %d", arr[i]);
		printf("\n");
		if (arr[mid] == x)
			return (mid);

		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));

		return (binarySearch(arr, mid + 1, r, x));
	}
	return (-1);
}
