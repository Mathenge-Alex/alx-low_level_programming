#include "main.h"

/**
 * clear_bit - Function sets the value of a bit to 0 at an index.
 * @n: Input number to set
 * @index: Returns index of the number to set bit
 *
 * Return: Returns 1 on success, or -1 if on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mySet;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mySet = ~(1 << index);
	*n = *n & mySet;
	return (1);
}
