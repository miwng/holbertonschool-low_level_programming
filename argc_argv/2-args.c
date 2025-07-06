#include <stdio.h>

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
	int arg;
	
	for (arg = 0; arg < argc; arg++)
	printf("%s\n", argv[arg]);
	return (0);
}
