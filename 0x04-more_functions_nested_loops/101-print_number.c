#include "main.h"

/**
* print_number - Function prints an integer provided as argument
* @n: The integer to be printed
* Return: Returns nothing
*/
void print_number(int n)
{
	int divisor = 1;

	int is_negtv = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		is_negtv = 1;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}

	if (is_negtv == 0 && n == 0)
	{
		_putchar('0');
	}
}
