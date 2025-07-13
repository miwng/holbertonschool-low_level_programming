#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - Entry point
 *
 * @min: first position of array
 *
 * @max: last position of array
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int *array;
	int index;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
