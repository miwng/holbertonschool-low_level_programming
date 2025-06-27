#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * @a: pointer to char a
 *
 * @n: int to n
 *
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int array = 0;
	
	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);

		if (array != (n -1))
			printf(", ");
	}
	printf("\n");
}
