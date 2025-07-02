#include "main.h"
#include <stdio.h>

/**
 * _memset - Entry point
 *
 * @s: Pointer that points to n
 *
 * @b: To fill n bytes of mem
 *
 * @n: Bytes of memory pointed to by s
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;
	return (s);
}
