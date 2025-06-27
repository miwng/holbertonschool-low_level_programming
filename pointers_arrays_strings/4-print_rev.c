#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 *
 * @s: pointer to char s
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
