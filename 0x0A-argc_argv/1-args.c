#include <stdio.h>
/**
 *main- function prints number of arguments being passed.
 *@argc: the number of command line arguments.
 *@argv: a pointer to array of command line arguments.
 *Return: 0-success, other than 0 on failure.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
