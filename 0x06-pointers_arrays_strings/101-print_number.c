#include "main.h"
/**
* print_number - Function prints numbers chars
* @n: Integer parameter
* Return: Returns 0
**/

void print_number(int n)
{
		unsigned int size, num, factor;

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
		num = 1;

		while (factor > 9)
		{
				factor /= 10;
				num *= 10;
		}

		for (; num >= 1; num /= 10)
		{
				_putchar(((size / num) % 10) + 48);
		}
}
