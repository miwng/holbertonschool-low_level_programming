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
	int length;
	int reverse;
	int temp;

	while(*s)
		_putchar(*s++);
	
	temp = *s

	for (reverse = temp - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);	
	}
	_putchar('\n');
}
