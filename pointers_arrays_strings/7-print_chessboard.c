#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 *
 * @a: 9th element of array pointed to by pointer a
 *
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int index1 = 0;
	int index2;

	for (index1 = 0; a[index1][7]; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
			_putchar(a[index1][index2]);
		_putchar('\n');
	}
}
