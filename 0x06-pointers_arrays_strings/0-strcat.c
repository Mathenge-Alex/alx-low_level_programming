#include "main.h"
/**
 * *_strcat - Functions concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: Returns void
*/

char *_strcat(char *dest, char *src)
{
    int idx = -1, counter;
    for (counter = 0; dest[counter] != '\0'; counter++)
        ;

    do {
        idx++;
        dest[counter] = src[idx];
        counter++;
    } while (src[idx] != '\0');

    return (dest);
}
