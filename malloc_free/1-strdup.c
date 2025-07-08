#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 * @str: string
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int index;
	int size = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		size++;

	strcopy = malloc(sizeof(char) * (size + 1));

	if (strcopy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		strcopy[index] = str[index];
	return (strcopy);
}
