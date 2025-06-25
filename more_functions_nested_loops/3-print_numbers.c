#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		_putchar((numbers % 10) + '0');
	}
	_putchar('\n');
}
