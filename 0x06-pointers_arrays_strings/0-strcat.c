#include "main.h"
/**
 * *_strcat - Functions concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: Returns void
 */

char *_strcat(char *dest, char *src)
{
	int index = -1, counter;

	for (counter = 0; dest[counter] != '\0'; counter++)
		;

	do {
		index++;
		dest[counter] = src[index];
		counter++;
	} while (src[index] != '\0');

	return (dest);
}