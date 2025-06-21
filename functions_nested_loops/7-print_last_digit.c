#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Entry point
 * @d: Variable
 *
 * Description: Checks if lowercase
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int d)
{
	int digit = (d % 10);

	if (digit < 0)
	{
		digit *= -1;
	}
	_putchar (digit + '0');
	return (digit);
}
