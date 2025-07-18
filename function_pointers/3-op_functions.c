#include "function_pointers.h"
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition of 2 ints
 * 
 * @a: int number one
 * 
 * @b: int number two
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of 2 ints
 *
 * @a: first number
 *
 * @b: second number 
 * 
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of 2 ints
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2 ints
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two ints
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: remainder of the division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
