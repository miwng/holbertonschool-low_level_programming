#include "main.h"
#include <stdio.h>

/**
 * islower - Entry point
 *
 * Description: Checks if lowercase
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
