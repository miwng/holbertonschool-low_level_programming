#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - Entry point
 *
 * @x: string
 *
 * @y: s
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	int index = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	index *= _pow_recursion(x, y - 1);

	return (index);
}
