#include "main.h"

/**
 * get_bit - Function returns a bit value at a given index
 * @n: Input number to check
 * @index: Index to check
 *
 * Return: Returns the bit value, or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int factor, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	factor = 1 << index;
	checker = n & factor;
	if (checker == factor)
		return (1);
	return (0);
}
