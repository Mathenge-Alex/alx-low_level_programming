#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * * main - This is the main block
 * * Description: print all base 10 single digit numbers.
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
