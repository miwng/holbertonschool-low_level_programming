#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 *
 * @s: pointer to char s
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int length = 0;
	int temp;
	int reverse;

	char *a;
	char b;

	a = s;

	while (s[length] != '\0')
		length++;

	for (temp = 1; temp < length; temp++)
		a++;

	for (reverse = 0; reverse < (length / 2); reverse++)
	{
		b = s[reverse];
		s[reverse] = *a;
		*a = b;
		a--;
	}
}
