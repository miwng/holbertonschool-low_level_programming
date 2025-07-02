#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point
 *
 * @dest: Destination for copied bytes
 *
 * @src: Original location of bytes to be copied
 *
 * @n: Bytes of memory to be copied
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
