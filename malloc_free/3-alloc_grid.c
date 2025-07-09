#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *
 * @width: width of 2D array of integers
 *
 * @height: height of 2D array of integers
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int **shape;
	int hindex, windex;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	shape = malloc(sizeof(int *) * height);

	if (shape == NULL)
		return (NULL);

	for (hindex = 0; hindex < height; hindex++)
	{
		shape[hindex] = malloc(sizeof(int) * width);

		if (shape[hindex] == NULL)
		{
			for (; hindex >= 0; hindex--)
				free(shape[hindex]);

			free(shape);
			return (NULL);
		}
	}

	for (hindex = 0; hindex < height; hindex++)
	{
		for (windex = 0; windex < width; windex++)
			shape[hindex][windex] = 0;
	}

	return (shape);
}
