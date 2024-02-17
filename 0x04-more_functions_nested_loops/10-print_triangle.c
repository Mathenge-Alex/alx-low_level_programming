#include "main.h"

/**
* print_triangle - Function prints an upright triangle of a given size.
* @size: The triangle's size
* Return - Returns nothing
*/
void print_triangle(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j <= size; j++)
	{
		for (k = 0; k <= j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
