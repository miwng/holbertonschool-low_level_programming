#include "main.h"
#include <stdio.h>

/**
 * leet - Entry point
 *
 * @s: array
 *
 * Return: Always 0 (Success)
 */

char *leet(char *s)
{
	int index = 0;
	int loop = 0;

	char old[5] = {'a', 'e', 'o', 't', 'l'};
	char new[5] = {'4', '3', '0', '7', '1'};

	while (s[index])
	{
		loop = 0;

		while (loop < 5)
		{
			if (s[index] == old[loop] || s[index] + 32 == old[loop])
			{		
				s[index] = new[loop];
				break;
			}
			loop++;
		}
		index++;
	}
	return (s);
}
