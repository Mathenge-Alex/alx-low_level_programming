#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - Function prints the results of simple operations.
* @argc: Number of arguments supplied as input.
* @argv: A pointers array to the arguments.
*
* Return: Returns always 0.
*/
int main(int argc, char *argv[])
{
	int first_num, second_num;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_num = atoi(argv[1]);
	op = argv[2];
	second_num = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && second_num == 0) ||
	(*op == '%' && second_num == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(first_num, second_num));
	return (0);
}
