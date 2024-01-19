#include <stdlib.h>


/**
 * *malloc_checked - function allocates memory using malloc
 * function exits if it fails
 * @b: int
 * Return: pointer to the initialized array or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
