#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: an integers array
 * @size: size of array
 * @cmp: a function pointer
 * Return: returns the index of first element
 * that matches `cmp`, or -1 if none is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}

	return (-1);
}
