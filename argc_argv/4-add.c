#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: No of arguments
 *
 * @argv: Array of pointers
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int number;
	int digit;
	int result = 0;

	for (number = 1; number < argc; number++)
	{
		for (digit = 0; argv[number][digit]; digit++)
		{
			if (argv[number][digit] < '0' || argv[number][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[number]);
	}

	printf("%d\n", result);

	return (0);
}
