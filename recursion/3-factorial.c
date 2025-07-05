#include "main.h"
#include <stdio.h>

/**
 * factorial - Entry point
 *
 * @n: string
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	int index = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);

	index *= factorial(n - 1);

	return (index);
}
