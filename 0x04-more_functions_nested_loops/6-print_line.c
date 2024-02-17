#include "main.h"

/**
* print_line - Function prints a line of underscore characters
* @n: Number of times the character '_' should be printed
*/
void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
		_putchar('_');

	_putchar('\n');
}
