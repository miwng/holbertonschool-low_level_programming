#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 *
 * @s: String
 *
 * @c: First occurence of c to have pointer returned to
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
