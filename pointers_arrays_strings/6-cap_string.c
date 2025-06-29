#include "main.h"
#include <stdio.h>

/**
 * cap_string - Entry point
 *
 * @s: array
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *s)
{
	int upper = 0;
	int index;
	char spr[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[upper] != '\0')
	{
		for (index = 0; index < 13; index++)
		{
			if (s[upper] == spr[index] && s[upper + 1] >= 'a' && s[upper + 1] <= 'z')
			{
				s[upper + 1] -= 32;
				break;
			}
		}
		upper++;
	}
	return (s);
}
