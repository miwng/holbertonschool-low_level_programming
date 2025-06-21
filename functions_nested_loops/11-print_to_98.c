#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98- Entry point
 *
 * @n: Starting number
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98 '\n");
	}
	else if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98 \n");
	}
	else
	{
		for (n = n; n > 97; n--)
		{
			printf("%d, ", n);
		}
		printf("98 \n");
	}
}

