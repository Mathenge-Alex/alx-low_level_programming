#include <stdlib.h>


/**
 * *malloc_checked - the function allocates memory
 * function exits if it fails
 * @b: int
 * Return: returns pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
