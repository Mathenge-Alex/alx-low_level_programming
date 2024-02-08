#include "main.h"

/**
 * flip_bits - Function prints no of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: Returns no. of bits needed to flip
 * to change from one no. to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, checker;
	unsigned int count, j;

	count = 0;
	diff = n ^ m;
	checker = 1;

	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (checker == (diff & checker))
			count++;
		checker <<= 1;
	}
	return (count);
}
