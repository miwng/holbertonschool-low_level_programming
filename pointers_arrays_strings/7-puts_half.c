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
	int index = 0;
	int half;

	while (str[index++])
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length + 1) / 2;
	}
	for (index = half; index < length; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
