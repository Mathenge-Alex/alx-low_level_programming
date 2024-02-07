#include "main.h"
/**
 * *_strncpy - Function copies the string
 * that is pointed to by src.
 * @dest: buffer pointer.
 * @src: source string pointer.
 * @n: src length.
 * Return: Returns char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
