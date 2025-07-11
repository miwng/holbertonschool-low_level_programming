#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - Entry point
 *
 * @b: allocation of b to mem
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)

{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
