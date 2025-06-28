#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Entry point
 *
 * @a: integer a - array
 *
 * @n: number of elements to swap elements
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int temp;
	int reverse;

	for (reverse = n - 1; reverse >= n / 2; reverse--)
	{
		temp = a[n - 1 - reverse];
		a[n - 1 - reverse] = a[reverse];
		a[reverse] = temp;
	}
}
