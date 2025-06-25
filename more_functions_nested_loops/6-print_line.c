#include "main.h"
#include <stdio.h>

/**
 * print_line - Entry point
 *
 * @n: number of times character should be printed
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int line;

	if (n != 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
