#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * @a: Matrix
 *
 * @size: Size of matrix
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int index;
	int a1 = 0;
	int a2 = 0;

	for (index = 0; index < size; index++)
	{
		a1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		a2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", a1, a2);
}
