#include "main.h"
/**
* print_number - Function prints numbers chars
* @n: Integer parameter
* Return: Returns 0
**/

void print_number(int n)
{
		unsigned int size, factor, number;

		if (n < 0)
		{
				_putchar(45);
				size = -n;
		}
		else
		{
				size = n;
		}

		factor = size;
		number = 1;

		while (factor > 9)
		{
				factor /= 10;
				number *= 10;
		}

		for (; number >= 1; number /= 10)
		{
				_putchar(((size / number) % 10) + 48);
		}
}
