#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: pointer to string a
 *
 * @b: pointer to string b
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
