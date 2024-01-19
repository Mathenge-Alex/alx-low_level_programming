#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function concatenates any two strings
 * @s1: pointer to the first string.
 * @s2: pointer to the 2nd string.
 * @n: Number of to concatenate bytes from n2.
 *
 * Return: returns pointer to the memory space
 * containing the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1_length, s2_length;

/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/*Compute strings length*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
/*Case 1 & 2 Memory reservation*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
/*Copy into str the first string*/
	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
/*copy into str the second string*/
	for (b = 0; b < n; b++)
	{
		str[a] = s2[b];
		a++;
	}

	str[a] = '\0';
	return (str);
}
