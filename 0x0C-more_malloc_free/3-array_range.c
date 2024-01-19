#include <stdlib.h>
#include "main.h"
/**
 * array_range - function creates an array of integers
 * @min: the starting int
 * @max: maximum int
 * Return: returns an array of integers
 */
int *array_range(int min, int max)
{
	int len, j;
	int *pointr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	pointr = malloc(sizeof(int) * len);
	if (!pointr)
		return (NULL);
	for (j = 0; j < len; j++)
		pointr[j] = min++;
	return (pointr);
}
