#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char p;
	int r;

	for (r = 0; r < 10; r++)
	{
		for (p = 97; p < 123; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
