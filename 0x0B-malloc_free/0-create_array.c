#include <stdlib.h>

/**
 * *create_array - Function creates a chars array
 * and initializes the arr with a char.
 * @size: array size
 * @c: char to initialize
 * Return: Returns pointer to the initialized arr or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *k = malloc(size);

	if (size == 0 || k == 0)
		return (0);

	while (size--)
		k[size] = c;

	return (k);
}
