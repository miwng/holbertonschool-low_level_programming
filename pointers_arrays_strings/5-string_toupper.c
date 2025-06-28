#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Entry point
 *
 * @str: array
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	int uppercase = 0;

	while (str[uppercase++])

		if (str[uppercase] >= 'a' && str[uppercase] <= 'z')
		{
			str[uppercase] -= 32;
		}
	uppercase++;
	return (str);
}
