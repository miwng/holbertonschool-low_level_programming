#include "main.h"
#include <unistd.h>

int _putchar(char p)
{
	return (write(1, &p, 1));
}
