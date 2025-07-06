#include "main.h"
#include <stdio.h>

/**
 * _sqrt - Entry point
 *
 * @number: Number to find natural square root
 *
 * @root: Root
 *
 * Return: Always 0 (Success)
 */

int _sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);
	if (root == number / 2)
		return (-1);
	return (_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - Entry point
 *
 * @n: Number to return natural square root, if not return -1.
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, root));
}
