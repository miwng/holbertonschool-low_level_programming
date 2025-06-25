#include "main.h"
#include <stdio.h>

/**
 * print_square - Entry point
 *
 * @size: the size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			if (height == size - 1)
				continue;
			_putchar('\n');
		}

	}
	_putchar('\n');
}
