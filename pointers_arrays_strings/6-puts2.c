#include "main.h"
#include <stdio.h>

/**
 * puts2 - Entry point
 *
 * @str: pointer to char s
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int length = 0;
	int second;
	
	while (str[length] != '\0')
		length++;

	for (second = 0; second < length; second += 2)
		_putchar(str[second]);

	_putchar('\n');
}
