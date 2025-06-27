#include "main.h"
#include <stdio.h>

/**
 * puts_half - Entry point
 *
 * @str: pointer to char s
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int length = 0;
	int n = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if ((n % 2) == 1)
	{
		length = (n - 1) / 2;
		length += 1;
	}
	else
	{
		length = n / 2;
	}
	for ( ; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
