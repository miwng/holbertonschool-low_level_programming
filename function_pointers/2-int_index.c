#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * @array: array
 *
 * @size: size of array
 *
 * @cmp: pointer to function to action
 *
 * Return: Index of first element that doesn't return 0, otherwise -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
