#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - creeates 2 dimensional array of integers
 * @width: the column
 * @height: the row
 *
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int **q;
	int i = 0;
	int j = 0;
	int k = 0;

	q = (int **) malloc(sizeof(int *) * height);
	if (!q || width == 0 || height == 0)
		return (NULL);


	while (i < height)
	{
		*(q + i) = (int *) malloc(sizeof(int) * width);
		if (!(*(q + i)))
		{
			free(q);
			for (; k < i; k++)
			       free(q[k]);	
			return (NULL);
		}
		while (j < width)
		{
			q[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	return (q);
}
