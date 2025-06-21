#include "main.h"
#include <stdio.h>

/**
 * times_table- Entry point
 *
 * Description: Checks if lowercase
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int n;
	int m;
	int a;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1; m < 10; m++)
		{
			_putchar (',');
			_putchar(' ');

			a = n * m;

			if (a <= 9)
				_putchar(' ');
			else
				_putchar((a / 10) + '0');

			_putchar((a % 10) + '0');
		}

		_putchar ('\n');
	}
}
