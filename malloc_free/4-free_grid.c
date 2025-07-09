#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *
 * @grid: grid of 2D array of integers
 *
 * @height: height of 2D array of integers
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
