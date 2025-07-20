#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string
 *
 * @separator: separates string
 *
 * @n: n
 *
 * @...: a variable number of parameters
 *
 * Return: the sum of all parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	char *str;
	unsigned int index;

	va_start(print, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(print, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(print);
}
