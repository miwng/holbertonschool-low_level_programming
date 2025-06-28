#include "main.h"
#include <stdio.h>

/**
 * _strncat - Entry point
 *
 * @dest: pointer to dest string
 *
 * @src: src string to add to end of dest string
 *
 * @n: prevents src from null-termination if n or more bytes exist
 *
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int src_length = 0;

	while (dest[count++])
		src_length++;

	for (count = 0; src[count] && count < n; count++)
		dest[count] = src[count];
	for (count = src_length; count < n; count++)
		dest[count] = '\0';
	return (dest);
}
