#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *string_nconcat - Entry point
 *
 * @s1: pointer
 *
 * @s2: pointer
 *
 * @n: integer
 *
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int size = n;
	unsigned int index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		size++;

	concat = malloc(sizeof(char) * (size + 1));

	if (concat == NULL)
		return (NULL);

	size = 0;

	for (index = 0; s1[index]; index++)
		concat[size++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[size++] = s2[index];

	concat[size] = '\0';

	return (concat);
}
