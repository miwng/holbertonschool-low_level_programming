#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;
	int finalnumber;

	number = 0;
	finalnumber = 9;

	while (number <= finalnumber)
	{
		putchar(48 + number);

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}

		number = number + 1;
	}

	putchar('\n');
	return (0);
}
