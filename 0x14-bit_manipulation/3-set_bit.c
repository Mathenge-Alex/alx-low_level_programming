#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at an index.
 * @n: Input number to set
 * @index: The index at which to set bit
 *
 * Return: Returns 1 if it successful, or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
