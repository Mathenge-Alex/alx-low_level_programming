#include "function_pointers.h"

/**
 * array_iterator - function executes a function provided as a parameter
 * on each element of an array.
 * @array: an integer array
 * @size: array size
 * @action: a function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}
