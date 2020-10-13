#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a 2 dimensional array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to width * height array intialized to 0
 * or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	ar = (int **)malloc(sizeof(int *) * height);
	if (!ar)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);
		if (!ar[i])
		{
			for (j = 0; j < i; j++)
				free(ar[j])
			free(ar);
			return (0);
		}
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
