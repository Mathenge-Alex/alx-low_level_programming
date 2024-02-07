#include "main.h"

/**
 * reverse_array - Function reverses an array
 * @a: Input array
 * @n: Number of array elements
 * Return: Returns nothing
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int aux;

	while (j < n--)
	{
		aux = a[j];
		a[j++] = a[n];
		a[n] = aux;
	}
}
