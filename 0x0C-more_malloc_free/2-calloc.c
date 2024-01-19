#include "main.h"
/**
 * *_memset - function fills memory
 * with a constant byte
 * @s: a pointer to put the constant
 * @b: a constant
 * @n: maximum bytes to use
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
char *pointer = s;

while (n--)
	*s++ = b;

return (pointer);
}

/**
 * *_calloc - function allocates memory
 * using malloc for an array,
 * @nmemb: the array length
 * @size: the size of each element
 * Return: returns a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;

if (size == 0 || nmemb == 0)
	return (NULL);
mem = malloc(sizeof(int) * nmemb);

if (mem == 0)
	return (NULL);

_memset(mem, 0, nmemb * sizeof(int));

return (mem);
}
