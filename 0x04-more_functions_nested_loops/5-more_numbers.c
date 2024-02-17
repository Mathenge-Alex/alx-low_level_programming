#include "main.h"

/**
* more_numbers - Function prints a numbers 10 times from 0 to 14
* followed by a new line
* Return: Returns nothing
*/
void more_numbers(void)
{
	int j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
