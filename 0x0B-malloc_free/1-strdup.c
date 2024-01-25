#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Function returns a pointer to a new space in memory
 * which stores a copy of the string (parameter).
 * @str: string parameter
 * Return: Returns 0
 */

char *_strdup(char *str)
{
int i = 0;
int size = 0;
char *y;

if (str == NULL)
	return (NULL);

for (; str[size] != '\0'; size++)
;

/*+1 on the size puts the end of string character*/
y = malloc(size * sizeof(*str) + 1);

if (y == 0)
	return (NULL);
else
{
	for (; i < size; i++)
		y[i] = str[i];
}
return (y);
}
