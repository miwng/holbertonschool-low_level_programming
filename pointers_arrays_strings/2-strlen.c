#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * @s: pointer to char s
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
