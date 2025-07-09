#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * @s1: contents to fill new memory space
 *
 * @s2: follows s1 contaents
 *
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int index;
	int size = 0;
	char *space;
	int sarray = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		size++;

	for (index = 0; s2[index]; index++)
		size++;

	space = malloc(sizeof(char) * size);

	if (space == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		space[sarray++] = s1[index];

	for (index = 0; s2[index]; index++)
		space[sarray++] = s2[index];

	return (space);
}
