#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: string
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
	f(name);
}
