#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 *
 * @s: Contains bytes from accept
 *
 * @accept: Bytes to be counted
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
		}
		if (accept[index] == '\0')
		return (bytes);
		s++;
	}
	return (bytes);
}
