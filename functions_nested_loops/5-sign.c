#include "main.h"
#include <stdio.h>

/**
 * print_sign - Entry point
 * @n: variable
 *
 * Description: Checks if lowercase
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		putchar ('-');
		return (-1);
	}
}
