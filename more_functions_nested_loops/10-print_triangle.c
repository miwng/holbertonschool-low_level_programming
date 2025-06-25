#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Entry point
 *
 * @size: size of triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int triangle;
	int space;

	if (size > 0)
	{
		for (triangle = 1; triangle <= size; triangle++)
		{
			for (space = size - triangle; space > 0; space--)
				_putchar(' ');
			
			for (space = 0; space < triangle; space++)
				_putchar('#');
			
			if (triangle == size)
			       continue;

			_putchar('\n');
		}
	}
	_putchar('\n');	
}
