#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Entry point
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	int index = 0;

	if (*s)
	{
		index++;
		index += _strlen_recursion(s + 1);
	}
	return (index);
}
