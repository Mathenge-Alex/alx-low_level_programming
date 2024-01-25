#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function selects the correct operation function requested by a user
 * @s: operator argument
 * Return: returns function pointer corresponding to the given operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;
	return (ops[j].f);
}
