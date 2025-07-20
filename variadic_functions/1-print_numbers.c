#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print string
 *
 * @separator: separates string
 *
 * @n: n
 *
 * @...: a variable number of parameters
 *
 * Return: the sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int index;

	va_start(number, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(number, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(number);
}
