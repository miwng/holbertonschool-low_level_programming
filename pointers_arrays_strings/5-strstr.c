#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 *
 * @haystack: String to be checked for first occurrence of substring needle
 *
 * @needle: Full substring to be checked in string haystack
 * then pointer at beginning of substring
 *
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == '\0')
	return (haystack);

	while (*haystack)
	{
		for (index = 0; needle[index]; index++)
		{
			if (haystack[index] != needle[index])
			break;
		}

		if (needle[index] == '\0')
		return (haystack);

		haystack++;
	}
	return ('\0');
}
