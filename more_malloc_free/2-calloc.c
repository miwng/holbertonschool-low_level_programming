#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *_calloc - Entry point
 *
 * @size: pointer
 *
 * @nmemb: pointer
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *index1;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	index1 = mem;

	for (index = 0; index < (size * nmemb); index++)
		index1[index] = '\0';

	return (mem);
}
