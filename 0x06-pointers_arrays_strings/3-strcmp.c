#include "main.h"

/**
 * _strcmp - Function compares two strings.
 * @s1: input string
 * @s2: input string
 * Return: Function returns the difference (s1 - s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
