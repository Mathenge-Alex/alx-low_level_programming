#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - function checks if s is integer
 * @s: string to be checked
 * Return: returns 0 or 1
 */

int isInteger(const char *s)
{
int g = 0;
while (s[g] != '\0')
{
	if (s[g] < '0' || s[g] > '9')
		return (1);
	g++;
}
return (0);
}

/**
 * main - function adds positive nums
 * @argc: int
 * @argv: list
 * Return: returns 0
 */

int main(int argc, char const *argv[])
{
int total = 0;
while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	total += atoi(argv[argc]);
}

printf("%i\n", total);

return (0);
}
