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
	unsigned int idx;


	va_start(list, n);


	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(list, int));


		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(list);
}
