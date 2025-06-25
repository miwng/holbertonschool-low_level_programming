#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int numbers;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			if (numbers > 9)
				_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
	_putchar('\n');
	}
}
