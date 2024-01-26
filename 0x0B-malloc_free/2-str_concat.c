#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function finds length of a string
 * @s: Given string
 * Return: Returns an integer
 */


int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - Function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Returns pointer
 */

char *str_concat(char *s1, char *s2)
{
int size_str_1, size_str_2, i;
char *m;

if (s1 == NULL)
	s1 = "\0";
if (s2 == NULL)
	s2 = "\0";

size_str_1 = _strlen(s1);
size_str_2 = _strlen(s2);
m = malloc((size_str_1 + size_str_2) *sizeof(char) + 1);
if (m == 0)
	return (0);

for (i = 0; i <= size_str_1 + size_str_2; i++)
{
	if (i < size_str_1)
		m[i] = s1[i];
	else
		m[i] = s2[i - size_str_1];
}
m[i] = '\0';
return (m);
}
