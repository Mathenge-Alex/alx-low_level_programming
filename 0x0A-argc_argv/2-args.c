#include <stdio.h>

/**
 * main - function prints number of arguments passed into program
 * @argc: int
 * @argv: list
 * Return: 0 (Zero)
 */

int main(int argc, char const *argv[])
{
int j = 0;

while (argc--)
{
	printf("%s\n", argv[j]);
	j++;
}

return (0);
}
