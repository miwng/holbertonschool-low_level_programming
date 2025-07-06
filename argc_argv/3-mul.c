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
	int multi1;
	int multi2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	multi1 = atoi(argv[1]);
	multi2 = atoi(argv[2]);
	result = multi1 * multi2;

	printf("%d\n", result);

	return (0);
}
