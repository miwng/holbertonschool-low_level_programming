#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char p;

        for (p = 97; p < 123; p++)
        {
		_putchar(p);
	}
        _putchar('\n');
}
