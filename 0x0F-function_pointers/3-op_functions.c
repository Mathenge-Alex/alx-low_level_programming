#include "3-calc.h"

/**
 * op_add - The addition operator
 * @a: first integer
 * @b: second integer
 * Return: Returns sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The subtraction operator
 * @a: first integer
 * @b: second integer
 * Return: Returns difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The product of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: Returns product of provided numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: Returns result of the division of the provided numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The Modulus. Getting remainder after division of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: Returns the remainder of division of the given numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
