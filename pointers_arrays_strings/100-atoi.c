#include "main.h"
#include <stdio.h>

/**
 * _atoi - Entry point
 *
 * @s: points to string
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int count = 0;
	unsigned int ui = 0;
	int sign = 1;
	int digit = 0;

	while (s[count])
	{
		if (s[count] == 45)
		{
			sign *= -1;
		}

		while (s[count] >= 48 && s[count] <= 57)
		{
			digit = 1;
			ui = (ui * 10) + (s[count] - '0');
			count++;
		}

		if (digit == 1)
		{
			break;
		}

		count++;
	}

	ui *= sign;
	return (ui);
}
