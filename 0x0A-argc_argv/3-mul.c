#include <stdio.h>
#include <stdlib.h>
/**
 *main - function prints sum of two numbers.
 *@argc: number of command line arguments.
 *@argv: a pointer to the array of cmd arguments.
 *Return: 0 on success, other on failure.
 */

int main(int argc, char *argv[])
{
	int total;

	if (argc == 3)
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
