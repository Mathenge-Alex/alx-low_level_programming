#include "main.h"
#include <stdio.h>

/**
 * isLower - Function determines whether an ascii is in lowercase
 * @c: A character
 * Return: Returns 1 if true, or 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - Function determines whether an ascii is a delimiter
 * @c: Character
 * Return: Returns 1 if true, or 0 if false
 */
int isDelimiter(char c)
{
	int j;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (j = 0; j < 12; j++)
		if (c == delimiter[j])
			return (1);
	return (0);
}

/**
 * cap_string - Function changes all words of a string
 * to capitalized
 * @s: Input string
 * Return: Returns a string with capitalized words
 */
char *cap_string(char *s)
{
	char *pntr = s;
	int fndDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fndDelimit = 1;
		else if (isLower(*s) && fndDelimit)
		{
			*s -= 32;
			fndDelimit = 0;
		}
		else
			fndDelimit = 0;
		s++;
	}
	return (pntr);
}
