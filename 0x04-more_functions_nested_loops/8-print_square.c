#include "main.h"

/**
* print_square - Function prints a square made of '#' chars
* @size: The square size
* Return - Returns nothing
*/
void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
			_putchar('#');
		_putchar('\n');
	}
}
