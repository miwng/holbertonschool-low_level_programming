#include "main.h"
#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p;
	char str[] = "_putchar";

	for (p = 0; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}

	_putchar('\n');
	return (0);
}
