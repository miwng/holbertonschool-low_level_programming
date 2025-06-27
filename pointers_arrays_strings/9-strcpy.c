#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Entry point
 *
 * @dest: points to buffer
 *
 * @src: points to string
 *
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a++] = '\0';

	return (dest);
}
