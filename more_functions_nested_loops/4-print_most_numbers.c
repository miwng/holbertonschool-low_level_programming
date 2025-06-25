#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		if (numbers != 2 && numbers != 4)
			_putchar((numbers % 10) + '0');
	}
	_putchar('\n');
}
