#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * @str: pointer to char str
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
