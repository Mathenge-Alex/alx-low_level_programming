#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - Function prints all strings with separator
 * @separator: separates strings
 * @n: integer - number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int j;
char *c;
va_start(list, n);

for (j = 0; j < n; j++)
{
	c = va_arg(list, char*);
	if (c != NULL)
		printf("%s", c);
	else
		printf("(nil)");

	if (j != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
