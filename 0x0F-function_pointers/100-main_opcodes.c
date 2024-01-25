#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function's entry point
 *
 * @argc: the argument count
 *
 * @argv: The argument vector
 *
 * Return: Returns 0 always
 */
int main(int argc, char *argv[])
{
int j, k;
if (argc != 2)
{
printf("Error\n");
return (1);
}
k = atoi(argv[1]);
if (k < 0)
{
printf("Error\n");
exit(2);
}
for (j = 0; j < k; j++)
{
printf("%02hhx", *((char *)main + j));
if (j < k - 1)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
