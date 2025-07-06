#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Entry point
 *
 * @n: Number to be checked if prime number, otherwise return 0.
 *
 * Return: Always 0 (Success)
 */

int divide(int number, int div)
{
	if (number % div == 0)
		return (0);
	if (div == number / 2)
		return (1);
	return (divide(number, div + 1));
}	

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return(0);
	if (n <= 3)
		return (1);

	return (divide(n, div));
}
