#include "main.h"

/**
* print_diagonal - Function prints a diagonal line on the terminal
* @n: The number of times the char '\' should be printed
*/
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
