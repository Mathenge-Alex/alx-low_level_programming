#include "main.h"

/**
 * _pow - Function prints binary (base ^ power)
 * @base: The base
 * @power: The power
 *
 * Return: Returns binary
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int j;

	numb = 1;
	for (j = 1; j <= power; j++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - Function prints a number in binary form
 * @n: Input number
 *
 * Return: Returns void
 */
void print_binary(unsigned long int n)
{
	unsigned long int factor, checker;
	char flag;

	flag = 0;
	factor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (factor != 0)
	{
		checker = n & factor;
		if (checker == factor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || factor == 1)
		{
			_putchar('0');
		}
		factor >>= 1;
	}
}
