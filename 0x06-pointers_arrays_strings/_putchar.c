#include <unistd.h>

/**
* _putchar - Function writes the character c to stdout
* @c: Character to print
*
* Return: 1 On success
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
		return (write(1, &c, 1));
}
