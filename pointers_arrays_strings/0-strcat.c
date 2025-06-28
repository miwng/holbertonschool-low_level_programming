#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * @dest: pointer to dest string
 *
 * @src: src string to add to end of dest string
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int dest_length = 0;

	while (dest[count++])
		dest_length++;

	for (count = 0; src[count]; count++)
	{
		dest[dest_length++] = src[count];
	}
	
	return (dest);
}
