#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Entry point
 *
 * @s1: pointer to dest string
 *
 * @s2: src string to add to end of dest string
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
