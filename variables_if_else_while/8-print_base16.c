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
	int d;

	for (d = 0; d < 16; d++)
	{
		if (d < 10)
			putchar(d + '0');
		else
			putchar(d - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
