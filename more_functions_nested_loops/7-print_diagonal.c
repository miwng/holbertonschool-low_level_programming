#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Entry point
 *
 * @n: number of times character should be printed
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int line;
	int spaces;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (spaces = 0; spaces < line ; spaces++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;
			_putchar('\n');

		}
	}
	_putchar('\n');
}
