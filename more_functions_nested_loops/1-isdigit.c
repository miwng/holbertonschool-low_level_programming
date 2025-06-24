#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry point
 *
 * @c: character to check for digit
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
