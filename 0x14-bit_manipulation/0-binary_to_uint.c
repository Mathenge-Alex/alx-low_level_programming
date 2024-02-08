#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to unsigned int
 * @b: pointer to a string of a binary numer
 *
 * Return: Returns unsigned int with decimal value of
 * binary number on success, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int numb;

	numb = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		numb <<= 1;
		if (b[j] == '1')
			numb += 1;
	}
	return (numb);
}
