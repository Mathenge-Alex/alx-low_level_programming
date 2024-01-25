#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function prints all given numbers with separator
 * @separator: separates numbers
 * @n: integer - number of undefined arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int j;

va_start(list, n);

for (j = 0; j < n; j++)
{
	printf("%j", va_arg(list, int));
	if (j != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
